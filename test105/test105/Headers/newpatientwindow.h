#ifndef NEWPATIENTWINDOW_H
#define NEWPATIENTWINDOW_H

#include <QMainWindow>
#include "Headers/mainwindow.h"
#include "Headers/dao.h"
#include "Headers/test.h"

class MainWindow;
class test;

namespace Ui {
class NewPatientWindow;
}

class NewPatientWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NewPatientWindow(MainWindow *parent = 0); //QWidget
    ~NewPatientWindow();

    MainWindow* mainwindow;
    bool ok; // to decide whether the close action caised by ok or close button
    Patient patient;


private slots:
    void on_btn_reset_clicked();

    void showTime();
    void onReset();

    void on_btn_ok_clicked();

    void on_btn_addphysician_clicked();

    void on_btn_addrefphysician_clicked();

    void on_btn_adddepartment_clicked();

    void on_btn_deletephysician_clicked();

    void on_btn_deleterefphysician_clicked();

    void on_btn_deletedepartment_clicked();

    void on_lnedt_year_editingFinished();

private:
    void closeEvent(QCloseEvent *event);

    Ui::NewPatientWindow *ui;
    QString status;
    Dao* dao;
    Account currentuser;
    test *t;
};

#endif // NEWPATIENTWINDOW_H
