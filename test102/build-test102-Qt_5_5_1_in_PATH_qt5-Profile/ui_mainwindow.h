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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
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
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_date;
    QLabel *lbl_time;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QWidget *wdgt_main;
    QGridLayout *gridLayout;
    QPushButton *btn_addNewPatient;
    QRadioButton *rdbtn_id;
    QPushButton *pushButton_2;
    QRadioButton *rdbtn_name;
    QPushButton *btn_find;
    QPushButton *btn_addNewDoctor;
    QWidget *wdgt_addNew;
    QGridLayout *gridLayout_2;
    QLineEdit *lnedt_email;
    QRadioButton *rdbtn_male;
    QLineEdit *lnedt_middlename;
    QLineEdit *lnedt_firstname;
    QLineEdit *lnedt_lastname;
    QDateEdit *dateEdit;
    QRadioButton *rdbtn_female;
    QLineEdit *lnedt_address;
    QLabel *lbl_birthday;
    QLineEdit *lnedt_mobile;
    QLabel *label;
    QPushButton *btn_addNew_add_;
    QPushButton *btn_addNew_reset;
    QWidget *wdgt_table;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1185, 855);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lbl_date = new QLabel(centralWidget);
        lbl_date->setObjectName(QStringLiteral("lbl_date"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_date->sizePolicy().hasHeightForWidth());
        lbl_date->setSizePolicy(sizePolicy);
        lbl_date->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(lbl_date);

        lbl_time = new QLabel(centralWidget);
        lbl_time->setObjectName(QStringLiteral("lbl_time"));
        sizePolicy.setHeightForWidth(lbl_time->sizePolicy().hasHeightForWidth());
        lbl_time->setSizePolicy(sizePolicy);
        lbl_time->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(lbl_time);

        verticalSpacer = new QSpacerItem(20, 180, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        wdgt_main = new QWidget(centralWidget);
        wdgt_main->setObjectName(QStringLiteral("wdgt_main"));
        gridLayout = new QGridLayout(wdgt_main);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn_addNewPatient = new QPushButton(wdgt_main);
        btn_addNewPatient->setObjectName(QStringLiteral("btn_addNewPatient"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_addNewPatient->sizePolicy().hasHeightForWidth());
        btn_addNewPatient->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_addNewPatient, 0, 0, 1, 1);

        rdbtn_id = new QRadioButton(wdgt_main);
        rdbtn_id->setObjectName(QStringLiteral("rdbtn_id"));
        sizePolicy1.setHeightForWidth(rdbtn_id->sizePolicy().hasHeightForWidth());
        rdbtn_id->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(rdbtn_id, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(wdgt_main);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 0, 1, 1);

        rdbtn_name = new QRadioButton(wdgt_main);
        rdbtn_name->setObjectName(QStringLiteral("rdbtn_name"));
        sizePolicy1.setHeightForWidth(rdbtn_name->sizePolicy().hasHeightForWidth());
        rdbtn_name->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(rdbtn_name, 2, 1, 1, 1);

        btn_find = new QPushButton(wdgt_main);
        btn_find->setObjectName(QStringLiteral("btn_find"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn_find->sizePolicy().hasHeightForWidth());
        btn_find->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(btn_find, 1, 0, 2, 1);

        btn_addNewDoctor = new QPushButton(wdgt_main);
        btn_addNewDoctor->setObjectName(QStringLiteral("btn_addNewDoctor"));

        gridLayout->addWidget(btn_addNewDoctor, 0, 1, 1, 1);


        verticalLayout_5->addWidget(wdgt_main);

        wdgt_addNew = new QWidget(centralWidget);
        wdgt_addNew->setObjectName(QStringLiteral("wdgt_addNew"));
        gridLayout_2 = new QGridLayout(wdgt_addNew);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lnedt_email = new QLineEdit(wdgt_addNew);
        lnedt_email->setObjectName(QStringLiteral("lnedt_email"));

        gridLayout_2->addWidget(lnedt_email, 5, 1, 1, 1);

        rdbtn_male = new QRadioButton(wdgt_addNew);
        rdbtn_male->setObjectName(QStringLiteral("rdbtn_male"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(rdbtn_male->sizePolicy().hasHeightForWidth());
        rdbtn_male->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(rdbtn_male, 4, 0, 1, 1);

        lnedt_middlename = new QLineEdit(wdgt_addNew);
        lnedt_middlename->setObjectName(QStringLiteral("lnedt_middlename"));
        lnedt_middlename->setInputMethodHints(Qt::ImhNone);

        gridLayout_2->addWidget(lnedt_middlename, 0, 1, 1, 1);

        lnedt_firstname = new QLineEdit(wdgt_addNew);
        lnedt_firstname->setObjectName(QStringLiteral("lnedt_firstname"));
        lnedt_firstname->setInputMethodHints(Qt::ImhLowercaseOnly|Qt::ImhUppercaseOnly);
        lnedt_firstname->setFrame(true);
        lnedt_firstname->setCursorPosition(0);
        lnedt_firstname->setClearButtonEnabled(false);

        gridLayout_2->addWidget(lnedt_firstname, 0, 0, 1, 1);

        lnedt_lastname = new QLineEdit(wdgt_addNew);
        lnedt_lastname->setObjectName(QStringLiteral("lnedt_lastname"));
        lnedt_lastname->setInputMethodHints(Qt::ImhNone);

        gridLayout_2->addWidget(lnedt_lastname, 0, 2, 1, 1);

        dateEdit = new QDateEdit(wdgt_addNew);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        gridLayout_2->addWidget(dateEdit, 3, 1, 1, 1);

        rdbtn_female = new QRadioButton(wdgt_addNew);
        rdbtn_female->setObjectName(QStringLiteral("rdbtn_female"));

        gridLayout_2->addWidget(rdbtn_female, 4, 1, 1, 1);

        lnedt_address = new QLineEdit(wdgt_addNew);
        lnedt_address->setObjectName(QStringLiteral("lnedt_address"));

        gridLayout_2->addWidget(lnedt_address, 2, 0, 1, 3);

        lbl_birthday = new QLabel(wdgt_addNew);
        lbl_birthday->setObjectName(QStringLiteral("lbl_birthday"));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setPointSize(16);
        lbl_birthday->setFont(font);
        lbl_birthday->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lbl_birthday, 3, 0, 1, 1);

        lnedt_mobile = new QLineEdit(wdgt_addNew);
        lnedt_mobile->setObjectName(QStringLiteral("lnedt_mobile"));

        gridLayout_2->addWidget(lnedt_mobile, 5, 0, 1, 1);

        label = new QLabel(wdgt_addNew);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 4, 2, 1, 1);

        btn_addNew_add_ = new QPushButton(wdgt_addNew);
        btn_addNew_add_->setObjectName(QStringLiteral("btn_addNew_add_"));
        sizePolicy1.setHeightForWidth(btn_addNew_add_->sizePolicy().hasHeightForWidth());
        btn_addNew_add_->setSizePolicy(sizePolicy1);
        btn_addNew_add_->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(btn_addNew_add_, 6, 1, 1, 1);

        btn_addNew_reset = new QPushButton(wdgt_addNew);
        btn_addNew_reset->setObjectName(QStringLiteral("btn_addNew_reset"));
        sizePolicy1.setHeightForWidth(btn_addNew_reset->sizePolicy().hasHeightForWidth());
        btn_addNew_reset->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(btn_addNew_reset, 6, 2, 1, 1);


        verticalLayout_5->addWidget(wdgt_addNew);


        verticalLayout_6->addLayout(verticalLayout_5);

        wdgt_table = new QWidget(centralWidget);
        wdgt_table->setObjectName(QStringLiteral("wdgt_table"));
        horizontalLayout_2 = new QHBoxLayout(wdgt_table);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        tableView = new QTableView(wdgt_table);
        tableView->setObjectName(QStringLiteral("tableView"));
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(tableView);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));

        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_6->addWidget(wdgt_table);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1185, 25));
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
        lbl_date->setText(QString());
        lbl_time->setText(QString());
        btn_addNewPatient->setText(QApplication::translate("MainWindow", "Add New Patient", 0));
        rdbtn_id->setText(QApplication::translate("MainWindow", "ID", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", 0));
        rdbtn_name->setText(QApplication::translate("MainWindow", "&Name", 0));
        btn_find->setText(QApplication::translate("MainWindow", "Find", 0));
        btn_addNewDoctor->setText(QApplication::translate("MainWindow", "Add New Doctor", 0));
        lnedt_email->setPlaceholderText(QApplication::translate("MainWindow", "Email", 0));
        rdbtn_male->setText(QApplication::translate("MainWindow", "&Male", 0));
        lnedt_middlename->setInputMask(QString());
        lnedt_middlename->setPlaceholderText(QApplication::translate("MainWindow", "Middle Name", 0));
        lnedt_firstname->setPlaceholderText(QApplication::translate("MainWindow", "First Name", 0));
        lnedt_lastname->setPlaceholderText(QApplication::translate("MainWindow", "Last Name", 0));
        dateEdit->setDisplayFormat(QApplication::translate("MainWindow", "dd/MM/yyyy", 0));
        rdbtn_female->setText(QApplication::translate("MainWindow", "&Female", 0));
        lnedt_address->setPlaceholderText(QApplication::translate("MainWindow", "Address", 0));
        lbl_birthday->setText(QApplication::translate("MainWindow", "B&irthday", 0));
        lnedt_mobile->setPlaceholderText(QApplication::translate("MainWindow", "Mobile", 0));
        label->setText(QApplication::translate("MainWindow", "T&extLabel", 0));
        btn_addNew_add_->setText(QApplication::translate("MainWindow", "Add", 0));
        btn_addNew_reset->setText(QApplication::translate("MainWindow", "Reset", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
