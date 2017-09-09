#ifndef NEWUSERWINDOW_H
#define NEWUSERWINDOW_H

#include <QMainWindow>
#include "Headers/mainwindow.h"

class MainWindow;

namespace Ui {
class NewUserWindow;
}

class NewUserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NewUserWindow(MainWindow *parent = 0); //QWidget
    ~NewUserWindow();

private:
    void closeEvent(QCloseEvent *event);

    Ui::NewUserWindow *ui;
    Dao* dao;
    Account currentuser;
    MainWindow* mainwindow;
};

#endif // NEWUSERWINDOW_H
