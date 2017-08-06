#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtGui>
#include <QtCore>
#include <QStatusBar>
#include <QFileDialog>
#include <QtSql/QtSql>

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
    QString filename =QFileDialog::getOpenFileName(this,
                                                   tr("Open Image"), "/home", tr("Image Files (*.png *.jpg *.bmp)"));;

    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly)) return;
    QByteArray imgData = file.readAll();

    id = ui->lnedt_age->text().toInt(&ok);

    if (ok && id > 0){
        Patient_Image image(id, filename, imgData);
        dao.dao_insert_image(image, status);
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
    QString searchID = ui->lnedt_select->text();
    QString status;

    if(searchID == ""){
        query = dao.dao_select(status);
        model->setQuery(query);
        ui->tableView->setModel(model);
        ui->statusBar->showMessage(status);
    }

    else{
        bool ok;
        int id = searchID.toInt(&ok);
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
    Dialog dialog;
    dialog.setModal(true);
    dialog.exec();


}

MainWindow::~MainWindow()
{
    delete ui;
}
