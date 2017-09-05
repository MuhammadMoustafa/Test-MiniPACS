#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <Qt>
//#include <QtQuick>
#include <QtGui>
#include <QtCore>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    showTime();
    timer->start(1000);

    QPropertyAnimation *animation2 = new QPropertyAnimation(ui->wdgt_addNew, "maximumHeight");
    animation2->setDuration(1000);
    animation2->setStartValue(500);
    animation2->setEndValue(0);
    animation2->start();

    QRegExp reg_string("[A-z]+");
    QRegExpValidator  *validator_string = new QRegExpValidator(reg_string,this);
    ui->lnedt_firstname->setValidator(validator_string);
    ui->lnedt_middlename->setValidator(validator_string);
    ui->lnedt_lastname->setValidator(validator_string);

    QRegExp reg_alphanum("[A-z0-9-]+");
    QRegExpValidator  *validator_alphanum = new QRegExpValidator(reg_alphanum,this);
    ui->lnedt_address->setValidator(validator_alphanum);
    ui->lnedt_mobile->setValidator(validator_alphanum);

    QRegExp reg_email("\\b[A-z0-9._%+-]+@[A-z0-9.-]+\\.[A-z]{2,4}\\b");

    QRegExpValidator  *validator_email = new QRegExpValidator(reg_email,this);
    ui->lnedt_email->setValidator(validator_email);
}

void MainWindow::showTime()
{
    ui->lbl_date->setText(QDate::currentDate().toString("dd:MM:yyyy"));
    ui->lbl_time->setText(QTime::currentTime().toString("hh:mm:ss"));
}

void MainWindow::on_btn_addNew_clicked()
{

}

void MainWindow::on_btn_addNewPatient_clicked(bool checked)
{
    QPropertyAnimation *animation1 = new QPropertyAnimation(ui->wdgt_addNew, "maximumHeight");
    animation1->setDuration(1000);
    animation1->setStartValue(0);
    animation1->setEndValue(500);

    //animation1->start();
    //ui->wdgt_addNew->show();
    QPropertyAnimation *animation2 = new QPropertyAnimation(ui->wdgt_table, "maximumHeight");
    animation2->setDuration(1000);
    animation2->setStartValue(500);
    animation2->setEndValue(0);
    //animation2->start();

    QParallelAnimationGroup *group = new QParallelAnimationGroup;
    group->addAnimation(animation2);
    group->addAnimation(animation1);
    group->start();
    //ui->wdgt_table->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}
