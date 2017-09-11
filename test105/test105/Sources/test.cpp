#include "Headers/test.h"
#include "ui_test.h"

test::test(Patient patient, NewPatientWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::test)
{
    ui->setupUi(this);
    this->newpatientwindow = parent;
    newpatientwindow->close();
    this->newpatientwindow->ok = false;
    this->patient = patient;

    ui->label->setText(this->patient.get_firstname());
    ui->label_2->setText(this->patient.get_lastname());
    ui->label_3->setText(this->patient.get_birthday());
    ui->label_4->setText(this->patient.get_gender());
    ui->label_5->setText(QString::number(this->patient.get_height()));

    fromNewWindow = true;
}

test::test(Patient patient, ExistingPatientWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::test)
{
    ui->setupUi(this);
    this->exisitngpatientwindow = parent;
    exisitngpatientwindow->close();

    this->exisitngpatientwindow->ok = false;
    this->patient = patient;

    ui->label->setText(this->patient.get_firstname());
    ui->label_2->setText(this->patient.get_lastname());
    ui->label_3->setText(this->patient.get_birthday());
    ui->label_4->setText(this->patient.get_gender());
    ui->label_5->setText(QString::number(this->patient.get_height()));

    fromNewWindow = false;
}

void test::closeEvent(QCloseEvent *event)
{
    if(fromNewWindow){
        this->newpatientwindow->mainwindow->show();
    }
    else{
        this->exisitngpatientwindow->mainwindow->show();
    }
}

test::~test()
{
    delete ui;
}
