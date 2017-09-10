#include "Headers/newuserwindow.h"
#include "ui_newuserwindow.h"
#include <qinputdialog.h>

NewUserWindow::NewUserWindow(MainWindow *parent) : //QWidget
    QMainWindow(parent),
    ui(new Ui::NewUserWindow)
{
    ui->setupUi(this);
    this->dao = parent->dao;
    this->currentuser = parent->currentuser;
    this->mainwindow = parent;
    mainwindow->hide();

    ui->lbl_currentusername->setText(currentuser.get_username());
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    showTime();
    timer->start(1000);

    //qDebug() << ui->dateEdit->text();
    //connect(this, SIGNAL(QCloseEvent()), parent, SLOT(show()));
    ui->cmbox_physician->setModel(dao->selectPhysician());
    ui->cmbox_refphysician->setModel(dao->selectRefPhysician());
    ui->cmbox_examtype->setModel(dao->selectExamtype());
    ui->cmbox_department->setModel(dao->selectDepartment());

    if(!currentuser.isAdmin()){
        ui->wdgt_admin->hide();
    }

}

void NewUserWindow::showTime()
{
    ui->lbl_date->setText(QDate::currentDate().toString("dd:MM:yyyy"));
    ui->lbl_time->setText(QTime::currentTime().toString("hh:mm:ss"));
}

void NewUserWindow::closeEvent(QCloseEvent *event)
{
    mainwindow->show();
}

void NewUserWindow::on_btn_reset_clicked()
{

    ui->lnedt_firstname->setText("");
    ui->lnedt_lastname->setText("");
    ui->lbl_age->setText("Age");
    ui->spnbox_height->setValue(0.00);
    ui->spnbox_weight->setValue(0.00);

    ui->cmbox_department->setCurrentIndex(0);
    ui->cmbox_physician->setCurrentIndex(0);
    ui->cmbox_refphysician->setCurrentIndex(0);
    ui->cmbox_examtype->setCurrentIndex(0);

    ui->rdbtn_male->setAutoExclusive(false);
    ui->rdbtn_male->setChecked(false);
    ui->rdbtn_male->setAutoExclusive(true);

    ui->rdbtn_female->setAutoExclusive(false);
    ui->rdbtn_female->setChecked(false);
    ui->rdbtn_female->setAutoExclusive(true);

    ui->dateEdit_dob->setDate(QDate(2000,01,01));
}


void NewUserWindow::on_btn_ok_clicked()
{
    Patient patient;
    patient.set_firstname(ui->lnedt_firstname->text());
    patient.set_lastname(ui->lnedt_lastname->text());
    patient.set_birthday(ui->dateEdit_dob->text());
    patient.set_height(ui->spnbox_height->value());
    patient.set_weight(ui->spnbox_weight->value());
    patient.set_id(ui->lnedt_firstname->text());

    if(ui->rdbtn_male->isChecked()){
        patient.set_gender("Male");
    }
    else{
        patient.set_gender("Female");
    }

    QString id = QString(ui->lnedt_firstname->text()[0]) + ui->lnedt_firstname->text()[1] + ui->lnedt_lastname->text()[0]
               + ui->lnedt_lastname->text()[1] + ui->dateEdit_dob->text() + QString::number(qrand());
    patient.set_id(id);

    dao->insertPatient(patient,status);
    ui->statusbar->showMessage(status);
}


void NewUserWindow::on_btn_editphysician_clicked()
{
    bool ok;
    QString name = QInputDialog::getText(this, tr("Add Physician"),
                                         tr("Physician Name:"), QLineEdit::Normal,
                                         QDir::home().dirName(), &ok);
    if (ok && !name.isEmpty()){
        dao->insertPhysician(name, status);
        ui->cmbox_physician->setModel(dao->selectPhysician());
    }
    ui->statusbar->showMessage(status);
}

void NewUserWindow::on_btn_editrefphysician_clicked()
{
    bool ok;
    QString name = QInputDialog::getText(this, tr("Add Ref. Physician"),
                                         tr("Ref. Physician Name:"), QLineEdit::Normal,
                                         QDir::home().dirName(), &ok);
    if (ok && !name.isEmpty()){
        dao->insertRefPhysician(name, status);
        ui->cmbox_refphysician->setModel(dao->selectRefPhysician());
    }
    ui->statusbar->showMessage(status);
}

void NewUserWindow::on_btn_editdepartment_clicked()
{
    bool ok;
    QString name = QInputDialog::getText(this, tr("Add Department"),
                                         tr("Department Name:"), QLineEdit::Normal,
                                         QDir::home().dirName(), &ok);
    if (ok && !name.isEmpty()){
        dao->insertDepartment(name, status);
        ui->cmbox_department->setModel(dao->selectDepartment());
    }
    ui->statusbar->showMessage(status);
}

NewUserWindow::~NewUserWindow()
{
    //delete dao->selectDepartment();
    //delete dao->selectExamtype();
    //delete dao->selectPhysician();
    //delete dao->selectRefPhysician();
    delete ui;
}
