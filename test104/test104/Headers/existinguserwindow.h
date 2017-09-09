#ifndef EXISTINGUSERWINDOW_H
#define EXISTINGUSERWINDOW_H

#include <QMainWindow>
#include "Headers/mainwindow.h"

class MainWindow;

namespace Ui {
class ExistingUserWindow;
}

class ExistingUserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ExistingUserWindow(MainWindow *parent = 0);
    ~ExistingUserWindow();

private:
    void closeEvent(QCloseEvent *event);
    Ui::ExistingUserWindow *ui;
    Dao* dao;
    Account currentuser;
    MainWindow* mainwindow;
};

#endif // EXISTINGUSERWINDOW_H
