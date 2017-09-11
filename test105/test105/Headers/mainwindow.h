#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Headers/dao.h"
#include "Headers/newpatientwindow.h"
#include "Headers/existingpatientwindow.h"
#include "Headers/adminpanelwindow.h"

class NewPatientWindow;
class ExistingPatientWindow;
class AdminPanelWindow;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Dao* dao;
    Account currentuser;
    bool isLogged;

private slots:
    void on_btn_login_clicked();
    void showTime();

    void on_btn_newuser_clicked();

    void on_btn_existinguser_clicked();

    void on_btn_adminpanel_clicked();

private:
    Ui::MainWindow *ui;
    QString status;
    NewPatientWindow* wndw_newuser;
    ExistingPatientWindow* wndw_exisitinguser;
    AdminPanelWindow* wndw_adminpanel;

    void onlogin();
    void onlogout();
};

#endif // MAINWINDOW_H
