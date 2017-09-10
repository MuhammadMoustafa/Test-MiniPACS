#include "Headers/existinguserwindow.h"
#include "ui_existinguserwindow.h"

ExistingUserWindow::ExistingUserWindow(MainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::ExistingUserWindow)
{
    ui->setupUi(this);
    this->dao = parent->dao;
    this->currentuser = parent->currentuser;
    mainwindow = parent;
    mainwindow->hide();

}

void ExistingUserWindow::closeEvent(QCloseEvent *event)
{
    mainwindow->show();
}


void ExistingUserWindow::on_btn_Search_clicked()
{
    ui->tableView->setModel(dao->selectPatient(ui->lineEdit->text(),status));
    ui->statusbar->showMessage(status);
}

ExistingUserWindow::~ExistingUserWindow()
{
    delete ui;
}
