#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Headers/dao.h"
#include "Headers/newuserwindow.h"

class NewUserWindow;

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

private:
    Ui::MainWindow *ui;
    QString status;
    NewUserWindow* wndw_newuser;
};

#endif // MAINWINDOW_H
