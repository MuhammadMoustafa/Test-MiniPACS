/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *btn_addImages;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QRadioButton *rdbtn_id;
    QRadioButton *rdbtn_name;
    QPushButton *btn_select;
    QLineEdit *lnedt_select;
    QPushButton *btn_delete;
    QPushButton *btn_showImage;
    QPushButton *btn_insert;
    QLineEdit *lnedt_delete;
    QLineEdit *lnedt_showImage;
    QLineEdit *lnedt_address;
    QLineEdit *lnedt_addImage;
    QLineEdit *lnedt_age;
    QLineEdit *lnedt_name;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(832, 676);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        gridLayout->setContentsMargins(20, -1, 20, -1);
        btn_addImages = new QPushButton(centralWidget);
        btn_addImages->setObjectName(QStringLiteral("btn_addImages"));

        gridLayout->addWidget(btn_addImages, 3, 0, 1, 2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        rdbtn_id = new QRadioButton(centralWidget);
        rdbtn_id->setObjectName(QStringLiteral("rdbtn_id"));

        gridLayout->addWidget(rdbtn_id, 4, 3, 1, 1);

        rdbtn_name = new QRadioButton(centralWidget);
        rdbtn_name->setObjectName(QStringLiteral("rdbtn_name"));

        gridLayout->addWidget(rdbtn_name, 5, 3, 1, 1);

        btn_select = new QPushButton(centralWidget);
        btn_select->setObjectName(QStringLiteral("btn_select"));

        gridLayout->addWidget(btn_select, 4, 0, 2, 2);

        lnedt_select = new QLineEdit(centralWidget);
        lnedt_select->setObjectName(QStringLiteral("lnedt_select"));

        gridLayout->addWidget(lnedt_select, 4, 2, 2, 1);

        btn_delete = new QPushButton(centralWidget);
        btn_delete->setObjectName(QStringLiteral("btn_delete"));

        gridLayout->addWidget(btn_delete, 6, 0, 1, 2);

        btn_showImage = new QPushButton(centralWidget);
        btn_showImage->setObjectName(QStringLiteral("btn_showImage"));

        gridLayout->addWidget(btn_showImage, 7, 0, 1, 2);

        btn_insert = new QPushButton(centralWidget);
        btn_insert->setObjectName(QStringLiteral("btn_insert"));

        gridLayout->addWidget(btn_insert, 0, 0, 3, 1);

        lnedt_delete = new QLineEdit(centralWidget);
        lnedt_delete->setObjectName(QStringLiteral("lnedt_delete"));

        gridLayout->addWidget(lnedt_delete, 6, 2, 1, 2);

        lnedt_showImage = new QLineEdit(centralWidget);
        lnedt_showImage->setObjectName(QStringLiteral("lnedt_showImage"));

        gridLayout->addWidget(lnedt_showImage, 7, 2, 1, 2);

        lnedt_address = new QLineEdit(centralWidget);
        lnedt_address->setObjectName(QStringLiteral("lnedt_address"));

        gridLayout->addWidget(lnedt_address, 2, 2, 1, 2);

        lnedt_addImage = new QLineEdit(centralWidget);
        lnedt_addImage->setObjectName(QStringLiteral("lnedt_addImage"));

        gridLayout->addWidget(lnedt_addImage, 3, 2, 1, 2);

        lnedt_age = new QLineEdit(centralWidget);
        lnedt_age->setObjectName(QStringLiteral("lnedt_age"));

        gridLayout->addWidget(lnedt_age, 1, 2, 1, 2);

        lnedt_name = new QLineEdit(centralWidget);
        lnedt_name->setObjectName(QStringLiteral("lnedt_name"));

        gridLayout->addWidget(lnedt_name, 0, 2, 1, 2);


        verticalLayout->addLayout(gridLayout);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 832, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        btn_addImages->setText(QApplication::translate("MainWindow", "Add Images By ID", 0));
        label_2->setText(QApplication::translate("MainWindow", "Age", 0));
        label->setText(QApplication::translate("MainWindow", "Name", 0));
        label_3->setText(QApplication::translate("MainWindow", "Address", 0));
        rdbtn_id->setText(QApplication::translate("MainWindow", "&ID", 0));
        rdbtn_name->setText(QApplication::translate("MainWindow", "&Name", 0));
        btn_select->setText(QApplication::translate("MainWindow", "Select", 0));
        btn_delete->setText(QApplication::translate("MainWindow", "Delete By ID", 0));
        btn_showImage->setText(QApplication::translate("MainWindow", "Show Image By ID", 0));
        btn_insert->setText(QApplication::translate("MainWindow", "Insert", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
