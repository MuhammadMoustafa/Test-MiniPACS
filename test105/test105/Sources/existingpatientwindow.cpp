#include "Headers/existingpatientwindow.h"
#include "ui_existingpatientwindow.h"

ExistingPatientWindow::ExistingPatientWindow(MainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::ExistingPatientWindow)
{
    ui->setupUi(this);
    this->dao = parent->dao;
    this->currentuser = parent->currentuser;
    mainwindow = parent;
    mainwindow->hide();

}

void ExistingPatientWindow::closeEvent(QCloseEvent *event)
{
    mainwindow->show();
}


void ExistingPatientWindow::on_btn_Search_clicked()
{
    ui->tableView->setModel(dao->selectPatient(ui->lineEdit->text(),status));
    ui->statusbar->showMessage(status);
}

ExistingPatientWindow::~ExistingPatientWindow()
{
    delete ui;
}
