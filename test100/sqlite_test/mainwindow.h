#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QtSql>
#include "person.h"
#include "dao.h"

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
    void on_btn_search_clicked();

    void on_btn_insert_clicked();

    void on_btn_delete_clicked();

private:
    Ui::MainWindow *ui;
    Dao dao;
};

#endif // MAINWINDOW_H
