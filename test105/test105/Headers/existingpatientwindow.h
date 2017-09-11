#ifndef EXISTINGPATIENTWINDOW_H
#define EXISTINGPATIENTWINDOW_H

#include <QMainWindow>
#include "Headers/mainwindow.h"

class MainWindow;

namespace Ui {
class ExistingPatientWindow;
}

class ExistingPatientWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ExistingPatientWindow(MainWindow *parent = 0);
    ~ExistingPatientWindow();

private slots:
    void on_btn_Search_clicked();

private:
    void closeEvent(QCloseEvent *event);
    Ui::ExistingPatientWindow *ui;
    QString status;
    Dao* dao;
    Account currentuser;
    MainWindow* mainwindow;
};

#endif // EXISTINGPATIENTWINDOW_H
