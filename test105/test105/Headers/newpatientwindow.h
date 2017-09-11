#ifndef NEWPATIENTWINDOW_H
#define NEWPATIENTWINDOW_H

#include <QMainWindow>
#include "Headers/mainwindow.h"
#include "Headers/dao.h"

class MainWindow;

namespace Ui {
class NewPatientWindow;
}

class NewPatientWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NewPatientWindow(MainWindow *parent = 0); //QWidget
    ~NewPatientWindow();

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

    void on_dateEdit_dob_editingFinished();

private:
    void closeEvent(QCloseEvent *event);

    Ui::NewPatientWindow *ui;
    QString status;
    Dao* dao;
    Account currentuser;
    MainWindow* mainwindow;
};

#endif // NEWPATIENTWINDOW_H
