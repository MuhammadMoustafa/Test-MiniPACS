#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Headers/dao.h"
#include "Headers/newuserwindow.h"
#include "Headers/existinguserwindow.h"

class NewUserWindow;
class ExistingUserWindow;

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

private:
    Ui::MainWindow *ui;
    QString status;
    NewUserWindow* wndw_newuser;
    ExistingUserWindow* wndw_exisitinguser;

    void onlogin();
    void onlogout();
};

#endif // MAINWINDOW_H
