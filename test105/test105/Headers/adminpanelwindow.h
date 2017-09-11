#ifndef ADMINPANELWINDOW_H
#define ADMINPANELWINDOW_H

#include <QMainWindow>
#include "Headers/mainwindow.h"

class MainWindow;

namespace Ui {
class AdminPanelWindow;
}

class AdminPanelWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminPanelWindow(MainWindow *parent = 0);
    ~AdminPanelWindow();

private:
    Ui::AdminPanelWindow *ui;
};

#endif // ADMINPANELWINDOW_H
