#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtGui>
#include <QtCore>
#include <QStatusBar>
#include <QFileDialog>
#include <QtSql/QtSql>
#include <QtWidgets>
#include <QLabel>

#include "dialog.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString status;
    status = dao.status;

    if (dao.daoIsOpened){
        dao.dao_createTable(status);
        ui->statusBar->showMessage(status);
    }
}

void MainWindow::on_btn_insert_clicked()
{
    QString name, address, status;
    int age;
    bool ok;
    name = ui->lnedt_name->text();
    age = ui->lnedt_age->text().toInt(&ok);
    address = ui->lnedt_address->text();

    if (ok && age > 0){
        Person person(name, age, address);
        dao.dao_insert(person, status);

        QSqlQueryModel *model = new QSqlQueryModel();
        QSqlQuery query;
        query = dao.dao_select(status);
        model->setQuery(query);
        ui->tableView->setModel(model);

        ui->statusBar->showMessage(status);
    }

    else{
        ui->statusBar->showMessage("Age must be a positive integer");
    }
}

void MainWindow::on_btn_addImages_clicked()
{

    bool ok;
    int id = ui->lnedt_addImage->text().toInt(&ok);

    QString status;
    QStringList filenames =QFileDialog::getOpenFileNames(this,
                                                   tr("Open Image"), "./", tr("Image Files (*.png *.jpg *.bmp)"));;


    //if (!file.open(QIODevice::ReadOnly)) return;
    QByteArray imgData; //= file.readAll();

    if (ok && id > 0){
        for(int i = 0; i< filenames.length(); i++){
            QFile file(filenames.at(i));

            if (file.open(QIODevice::ReadOnly)){
                imgData = file.readAll();
                Patient_Image image(id, filenames.at(i), imgData);
                dao.dao_insert_image(image, status);
                /**
                what if one image faild to open
                statusBar Messages need review
                */
            }
            else {
                ui->statusBar->showMessage("Error Loading Images");
            }
        }
        ui->statusBar->showMessage(status);
    }

    else{
        ui->statusBar->showMessage("Write a Valid ID");
    }
}

void MainWindow::on_btn_select_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    QString search = ui->lnedt_select->text();
    QString status;

    if(ui->rdbtn_name->isChecked()){
        if(search == ""){
            query = dao.dao_select(status);
        }

        else{
            query = dao.dao_select(search, status);
        }
        model->setQuery(query);
        ui->tableView->setModel(model);
        ui->statusBar->showMessage(status);
    }

    else{
        if(search == ""){
            query = dao.dao_select(status);
            model->setQuery(query);
            ui->tableView->setModel(model);
            ui->statusBar->showMessage(status);
        }

        else{
            bool ok;
            int id = search.toInt(&ok);
            if(ok){
                query = dao.dao_select(id, status);
                model->setQuery(query);
                ui->tableView->setModel(model);
                ui->statusBar->showMessage(status);
            }
            else{
                ui->statusBar->showMessage("ID must be a positive integer and cannot be empty");
            }
        }
    }
//delete model;
}

void MainWindow::on_btn_delete_clicked()
{
    bool ok;
    int id = ui->lnedt_delete->text().toInt(&ok);
    QString status;
    QString selectStatus;

    bool queryIsExecuted;
    if(ok){
        dao.dao_delete(id, status, queryIsExecuted);

        if (queryIsExecuted){
            QSqlQueryModel *model = new QSqlQueryModel();
            QSqlQuery query;
            query = dao.dao_select(selectStatus);
            model->setQuery(query);
            ui->tableView->setModel(model);
            ui->statusBar->showMessage(status);
        }

        else{
            ui->statusBar->showMessage(status);
        }
    }

    else{
        ui->statusBar->showMessage("ID must be a positive integer and cannot be empty");
    }
}

void MainWindow::on_btn_showImage_clicked()
{
    QString status;
    QVector<QByteArray> images;
    bool ok;
    int id = ui->lnedt_showImage->text().toInt(&ok);

    if(ok){
        images = dao.dao_select_image(id, status);
        ui->statusBar->showMessage(status);
    }

    else{
        ui->statusBar->showMessage("ID must be a positive integer");
    }

    //Dialog dialog;
    //dialog.setModal(true);
    //dialog.exec();
    dialog = new Dialog(images, this);
    dialog->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}
