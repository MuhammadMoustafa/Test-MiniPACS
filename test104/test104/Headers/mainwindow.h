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

protected:
    //Dao dao;

private:
    Ui::MainWindow *ui;
    Dao dao;
};

#endif // MAINWINDOW_H
