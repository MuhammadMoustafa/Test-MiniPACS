#include "Headers/mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dao = new Dao();

    //wndw_newuser = new NewUserWindow(this);
    //wndw_exisitinguser = new ExistingUserWindow(this);


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

//                QPropertyAnimation *animation2 = new QPropertyAnimation(ui->wdgt_admin, "maximumHeight");
//                animation2->setDuration(1000);
//                animation2->setStartValue(0);
//                animation2->setEndValue(ui->wdgt_admin->height());
//                animation2->start();


void MainWindow::onlogin(){

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

        }
    }
}

void MainWindow::onlogout(){

    isLogged = false;
    ui->btn_login->setText("login");
    ui->wdgt_userpanel->hide();
    status = "logout";
}



void MainWindow::on_btn_login_clicked()
{

    if(!isLogged){
        onlogin();
    }
    else{
        onlogout();
    }

    ui->statusBar->showMessage(status);
}



void MainWindow::on_btn_newuser_clicked()
{
    wndw_newuser = new NewUserWindow(this);
    wndw_newuser->show();
}



void MainWindow::on_btn_existinguser_clicked()
{
    wndw_exisitinguser = new ExistingUserWindow(this);
    wndw_exisitinguser->show();
}

MainWindow::~MainWindow()
{
    delete dao;
    delete ui;
}
