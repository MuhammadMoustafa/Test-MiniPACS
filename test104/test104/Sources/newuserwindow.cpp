#include "Headers/newuserwindow.h"
#include "ui_newuserwindow.h"

NewUserWindow::NewUserWindow(MainWindow *parent) : //QWidget
    QMainWindow(parent),
    ui(new Ui::NewUserWindow)
{
    ui->setupUi(this);
    this->dao = parent->dao;
    this->currentuser = parent->currentuser;
    this->mainwindow = parent;
    mainwindow->hide();
    qDebug() << ui->dateEdit->text();
    //connect(this, SIGNAL(QCloseEvent()), parent, SLOT(show()));

}

void NewUserWindow::closeEvent(QCloseEvent *event)
{
    mainwindow->show();
}

NewUserWindow::~NewUserWindow()
{
    delete ui;
}
