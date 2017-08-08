#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dao.h"
#include "dialog.h"
#include "QtGui"
#include "QtCore"

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
    void on_btn_insert_clicked();

    void on_btn_addImages_clicked();

    void on_btn_select_clicked();

    void on_btn_delete_clicked();

    void on_btn_showImage_clicked();

    void showTime();

private:
    Ui::MainWindow *ui;
    Dao dao;
    Dialog *dialog;
};

#endif // MAINWINDOW_H
