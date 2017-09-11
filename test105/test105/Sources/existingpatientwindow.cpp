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
    this->ok = false;

}

void ExistingPatientWindow::closeEvent(QCloseEvent *event)
{
    if(!this->ok){
        mainwindow->show();
    }
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

void ExistingPatientWindow::on_tableView_clicked(const QModelIndex &index)
{
    int col = index.column();
    int row = index.row();

    if(col == 0 ){

        this->ok = true;

        const QAbstractItemModel * model = index.model();

        Patient patient;

        QString firstname = model->data(model->index(row, 1), Qt::DisplayRole).toString();
        QString lastname  = model->data(model->index(row, 2), Qt::DisplayRole).toString();
        QString birthday  = model->data(model->index(row, 3), Qt::DisplayRole).toString();
        QString gender    = model->data(model->index(row, 4), Qt::DisplayRole).toString();
        int     height    = model->data(model->index(row, 5), Qt::DisplayRole).toInt();
        int     weight    = model->data(model->index(row, 6), Qt::DisplayRole).toInt();


        patient.set_firstname(firstname);
        patient.set_lastname(lastname);
        patient.set_birthday(birthday);
        patient.set_gender(gender);
        patient.set_height(height);
        patient.set_weight(weight);

        t = new test(patient, this);
        t->show();
    }
}
