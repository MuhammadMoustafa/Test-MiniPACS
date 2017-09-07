#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Headers/dao.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_login_clicked();
    void showTime();

protected:
    Dao* dao;

private:
    Ui::MainWindow *ui;
    QString status;
    Account currentuser;
    bool isLogged;
};

#endif // MAINWINDOW_H
