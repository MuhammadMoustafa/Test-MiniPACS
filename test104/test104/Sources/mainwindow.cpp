#include "Headers/mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_login_clicked()
{
    Account account;
    account.set_username(ui->lnedt_username->text());
    account.set_password(ui->lnedt_password->text());

    qDebug() << dao.isUser(account);
}
