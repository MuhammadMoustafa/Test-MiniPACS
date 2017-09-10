#ifndef NEWUSERWINDOW_H
#define NEWUSERWINDOW_H

#include <QMainWindow>
#include "Headers/mainwindow.h"
#include "Headers/dao.h"

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

private slots:
    void on_btn_reset_clicked();

    void showTime();


    void on_btn_ok_clicked();

    void on_btn_editphysician_clicked();

    void on_btn_editrefphysician_clicked();

    void on_btn_editdepartment_clicked();

private:
    void closeEvent(QCloseEvent *event);

    Ui::NewUserWindow *ui;
    QString status;
    Dao* dao;
    Account currentuser;
    MainWindow* mainwindow;
};

#endif // NEWUSERWINDOW_H
