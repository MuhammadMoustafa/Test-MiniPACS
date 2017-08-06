#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtGui>
#include <QtCore>
#include <QStatusBar>
#include <QtSql/QtSql>

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

void MainWindow::on_btn_search_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    QString searchID = ui->lnedt_Search->text();
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
        ui->statusBar->showMessage(status);
    }

    else{
        ui->statusBar->showMessage("Age must be a positive integer");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
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
