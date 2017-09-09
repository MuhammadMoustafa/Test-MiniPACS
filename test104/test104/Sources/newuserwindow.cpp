#include "Headers/newuserwindow.h"
#include "ui_newuserwindow.h"

NewUserWindow::NewUserWindow(MainWindow *parent) : //QWidget
    QMainWindow(parent),
    ui(new Ui::NewUserWindow)
{
    ui->setupUi(this);
    this->dao = parent->dao;
    this->currentuser = parent->currentuser;
}

NewUserWindow::~NewUserWindow()
{
    delete ui;
}
