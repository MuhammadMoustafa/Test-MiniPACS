#include "Headers/mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dao = new Dao();
    ui->wdgt_userpanel->hide();
    ui->wdgt_admin->hide();
    isLogged = false;

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    showTime();
    timer->start(1000);

}

void MainWindow::showTime()
{
    ui->lbl_date->setText(QDate::currentDate().toString("dd:MM:yyyy"));
    ui->lbl_time->setText(QTime::currentTime().toString("hh:mm:ss"));
}

void MainWindow::on_btn_login_clicked()
{

    if(!isLogged){
        currentuser.set_username(ui->lnedt_username->text());
        currentuser.set_password(ui->lnedt_password->text());
        if(dao->isUser(currentuser, status)){
            ui->wdgt_userpanel->show();
            isLogged = true;
            ui->btn_login->setText("logout");
            ui->lnedt_password->setText("");
            ui->lnedt_username->setText("");

            if(currentuser.get_privilage()){
                ui->wdgt_admin->show();
//                QPropertyAnimation *animation2 = new QPropertyAnimation(ui->wdgt_admin, "maximumHeight");
//                animation2->setDuration(1000);
//                animation2->setStartValue(0);
//                animation2->setEndValue(ui->wdgt_admin->height());
//                animation2->start();

            }
        }
    }
    else{
        isLogged = false;
        ui->btn_login->setText("login");
        ui->wdgt_userpanel->hide();
        status = "logout";
    }

    ui->statusBar->showMessage(status);
}


MainWindow::~MainWindow()
{
    delete dao;
    delete ui;
}
