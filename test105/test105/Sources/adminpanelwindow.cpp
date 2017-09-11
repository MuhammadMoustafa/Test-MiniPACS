#include "Headers/adminpanelwindow.h"
#include "ui_adminpanelwindow.h"

AdminPanelWindow::AdminPanelWindow(MainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminPanelWindow)
{
    ui->setupUi(this);
}

AdminPanelWindow::~AdminPanelWindow()
{
    delete ui;
}
