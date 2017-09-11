#ifndef EXISTINGPATIENTWINDOW_H
#define EXISTINGPATIENTWINDOW_H

#include <QMainWindow>
#include "Headers/mainwindow.h"
#include "Headers/test.h"

class MainWindow;
class test;

namespace Ui {
class ExistingPatientWindow;
}

class ExistingPatientWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ExistingPatientWindow(MainWindow *parent = 0);
    ~ExistingPatientWindow();
    MainWindow* mainwindow;
    bool ok; // to decide whether the close action caised by ok or close button


private slots:
    void on_btn_Search_clicked();

    void on_tableView_clicked(const QModelIndex &index);

private:
    void closeEvent(QCloseEvent *event);
    Ui::ExistingPatientWindow *ui;
    QString status;
    Dao* dao;
    Account currentuser;
    test *t;
};

#endif // EXISTINGPATIENTWINDOW_H
