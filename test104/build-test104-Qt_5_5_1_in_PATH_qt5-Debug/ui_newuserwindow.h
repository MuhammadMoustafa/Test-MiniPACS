/********************************************************************************
** Form generated from reading UI file 'newuserwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSERWINDOW_H
#define UI_NEWUSERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewUserWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_date;
    QLabel *lbl_time;
    QVBoxLayout *verticalLayout_4;
    QLabel *lbl_currentuser;
    QLabel *lbl_currentusername;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *spnbox_height;
    QLineEdit *lnedt_lastname;
    QLabel *lbl_examtype;
    QComboBox *cmbox_examtype;
    QLabel *lbl_height;
    QLineEdit *lnedt_firstname;
    QRadioButton *rdbtn_male;
    QRadioButton *rdbtn_female;
    QLabel *lbl_age;
    QDateEdit *dateEdit_dob;
    QDoubleSpinBox *spnbox_weight;
    QLabel *lbl_weight;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_7;
    QLabel *lbl_physician;
    QLabel *lbl_refphysician;
    QLabel *lbl_department;
    QVBoxLayout *verticalLayout;
    QComboBox *cmbox_physician;
    QComboBox *cmbox_refphysician;
    QComboBox *cmbox_department;
    QWidget *wdgt_admin;
    QVBoxLayout *verticalLayout_6;
    QPushButton *btn_editphysician;
    QPushButton *btn_editrefphysician;
    QPushButton *btn_editdepartment;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_reset;
    QPushButton *btn_ok;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NewUserWindow)
    {
        if (NewUserWindow->objectName().isEmpty())
            NewUserWindow->setObjectName(QStringLiteral("NewUserWindow"));
        NewUserWindow->resize(1152, 863);
        centralwidget = new QWidget(NewUserWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_10 = new QVBoxLayout(centralwidget);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lbl_date = new QLabel(centralwidget);
        lbl_date->setObjectName(QStringLiteral("lbl_date"));

        verticalLayout_2->addWidget(lbl_date);

        lbl_time = new QLabel(centralwidget);
        lbl_time->setObjectName(QStringLiteral("lbl_time"));

        verticalLayout_2->addWidget(lbl_time);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lbl_currentuser = new QLabel(centralwidget);
        lbl_currentuser->setObjectName(QStringLiteral("lbl_currentuser"));

        verticalLayout_4->addWidget(lbl_currentuser);

        lbl_currentusername = new QLabel(centralwidget);
        lbl_currentusername->setObjectName(QStringLiteral("lbl_currentusername"));

        verticalLayout_4->addWidget(lbl_currentusername);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_5->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_5);


        verticalLayout_10->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer_2);


        verticalLayout_10->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalSpacer_3 = new QSpacerItem(200, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_9->addItem(horizontalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_9);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        spnbox_height = new QDoubleSpinBox(centralwidget);
        spnbox_height->setObjectName(QStringLiteral("spnbox_height"));
        spnbox_height->setMaximum(300);

        gridLayout_2->addWidget(spnbox_height, 1, 1, 1, 1);

        lnedt_lastname = new QLineEdit(centralwidget);
        lnedt_lastname->setObjectName(QStringLiteral("lnedt_lastname"));

        gridLayout_2->addWidget(lnedt_lastname, 0, 1, 1, 1);

        lbl_examtype = new QLabel(centralwidget);
        lbl_examtype->setObjectName(QStringLiteral("lbl_examtype"));

        gridLayout_2->addWidget(lbl_examtype, 5, 0, 1, 1);

        cmbox_examtype = new QComboBox(centralwidget);
        cmbox_examtype->setObjectName(QStringLiteral("cmbox_examtype"));

        gridLayout_2->addWidget(cmbox_examtype, 5, 1, 1, 1);

        lbl_height = new QLabel(centralwidget);
        lbl_height->setObjectName(QStringLiteral("lbl_height"));

        gridLayout_2->addWidget(lbl_height, 1, 0, 1, 1);

        lnedt_firstname = new QLineEdit(centralwidget);
        lnedt_firstname->setObjectName(QStringLiteral("lnedt_firstname"));

        gridLayout_2->addWidget(lnedt_firstname, 0, 0, 1, 1);

        rdbtn_male = new QRadioButton(centralwidget);
        rdbtn_male->setObjectName(QStringLiteral("rdbtn_male"));

        gridLayout_2->addWidget(rdbtn_male, 3, 0, 1, 1);

        rdbtn_female = new QRadioButton(centralwidget);
        rdbtn_female->setObjectName(QStringLiteral("rdbtn_female"));

        gridLayout_2->addWidget(rdbtn_female, 3, 1, 1, 1);

        lbl_age = new QLabel(centralwidget);
        lbl_age->setObjectName(QStringLiteral("lbl_age"));

        gridLayout_2->addWidget(lbl_age, 4, 1, 1, 1);

        dateEdit_dob = new QDateEdit(centralwidget);
        dateEdit_dob->setObjectName(QStringLiteral("dateEdit_dob"));
        dateEdit_dob->setCalendarPopup(true);

        gridLayout_2->addWidget(dateEdit_dob, 4, 0, 1, 1);

        spnbox_weight = new QDoubleSpinBox(centralwidget);
        spnbox_weight->setObjectName(QStringLiteral("spnbox_weight"));
        spnbox_weight->setMaximum(600);

        gridLayout_2->addWidget(spnbox_weight, 2, 1, 1, 1);

        lbl_weight = new QLabel(centralwidget);
        lbl_weight->setObjectName(QStringLiteral("lbl_weight"));

        gridLayout_2->addWidget(lbl_weight, 2, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, -1);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        lbl_physician = new QLabel(centralwidget);
        lbl_physician->setObjectName(QStringLiteral("lbl_physician"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_physician->sizePolicy().hasHeightForWidth());
        lbl_physician->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(lbl_physician);

        lbl_refphysician = new QLabel(centralwidget);
        lbl_refphysician->setObjectName(QStringLiteral("lbl_refphysician"));

        verticalLayout_7->addWidget(lbl_refphysician);

        lbl_department = new QLabel(centralwidget);
        lbl_department->setObjectName(QStringLiteral("lbl_department"));

        verticalLayout_7->addWidget(lbl_department);


        gridLayout->addLayout(verticalLayout_7, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cmbox_physician = new QComboBox(centralwidget);
        cmbox_physician->setObjectName(QStringLiteral("cmbox_physician"));

        verticalLayout->addWidget(cmbox_physician);

        cmbox_refphysician = new QComboBox(centralwidget);
        cmbox_refphysician->setObjectName(QStringLiteral("cmbox_refphysician"));

        verticalLayout->addWidget(cmbox_refphysician);

        cmbox_department = new QComboBox(centralwidget);
        cmbox_department->setObjectName(QStringLiteral("cmbox_department"));

        verticalLayout->addWidget(cmbox_department);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        wdgt_admin = new QWidget(centralwidget);
        wdgt_admin->setObjectName(QStringLiteral("wdgt_admin"));
        verticalLayout_6 = new QVBoxLayout(wdgt_admin);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        btn_editphysician = new QPushButton(wdgt_admin);
        btn_editphysician->setObjectName(QStringLiteral("btn_editphysician"));

        verticalLayout_6->addWidget(btn_editphysician);

        btn_editrefphysician = new QPushButton(wdgt_admin);
        btn_editrefphysician->setObjectName(QStringLiteral("btn_editrefphysician"));

        verticalLayout_6->addWidget(btn_editrefphysician);

        btn_editdepartment = new QPushButton(wdgt_admin);
        btn_editdepartment->setObjectName(QStringLiteral("btn_editdepartment"));

        verticalLayout_6->addWidget(btn_editdepartment);


        gridLayout->addWidget(wdgt_admin, 0, 3, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_8->addItem(horizontalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_8);


        verticalLayout_10->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer);


        verticalLayout_10->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        btn_reset = new QPushButton(centralwidget);
        btn_reset->setObjectName(QStringLiteral("btn_reset"));

        horizontalLayout_3->addWidget(btn_reset);

        btn_ok = new QPushButton(centralwidget);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout_3->addWidget(btn_ok);


        verticalLayout_10->addLayout(horizontalLayout_3);

        NewUserWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NewUserWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1152, 25));
        NewUserWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(NewUserWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        NewUserWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(lnedt_firstname, lnedt_lastname);
        QWidget::setTabOrder(lnedt_lastname, spnbox_height);
        QWidget::setTabOrder(spnbox_height, spnbox_weight);
        QWidget::setTabOrder(spnbox_weight, rdbtn_male);
        QWidget::setTabOrder(rdbtn_male, rdbtn_female);
        QWidget::setTabOrder(rdbtn_female, dateEdit_dob);
        QWidget::setTabOrder(dateEdit_dob, cmbox_examtype);
        QWidget::setTabOrder(cmbox_examtype, cmbox_physician);
        QWidget::setTabOrder(cmbox_physician, btn_editphysician);
        QWidget::setTabOrder(btn_editphysician, cmbox_refphysician);
        QWidget::setTabOrder(cmbox_refphysician, btn_editrefphysician);
        QWidget::setTabOrder(btn_editrefphysician, cmbox_department);
        QWidget::setTabOrder(cmbox_department, btn_editdepartment);
        QWidget::setTabOrder(btn_editdepartment, btn_ok);
        QWidget::setTabOrder(btn_ok, btn_reset);

        retranslateUi(NewUserWindow);

        QMetaObject::connectSlotsByName(NewUserWindow);
    } // setupUi

    void retranslateUi(QMainWindow *NewUserWindow)
    {
        NewUserWindow->setWindowTitle(QApplication::translate("NewUserWindow", "MainWindow", 0));
        lbl_date->setText(QApplication::translate("NewUserWindow", "Date", 0));
        lbl_time->setText(QApplication::translate("NewUserWindow", "Time", 0));
        lbl_currentuser->setText(QApplication::translate("NewUserWindow", "Current User :", 0));
        lbl_currentusername->setText(QString());
        lnedt_lastname->setPlaceholderText(QApplication::translate("NewUserWindow", "Last Name", 0));
        lbl_examtype->setText(QApplication::translate("NewUserWindow", "Exam Type", 0));
        lbl_height->setText(QApplication::translate("NewUserWindow", "Height in cm", 0));
        lnedt_firstname->setPlaceholderText(QApplication::translate("NewUserWindow", "First Name", 0));
        rdbtn_male->setText(QApplication::translate("NewUserWindow", "&Male", 0));
        rdbtn_female->setText(QApplication::translate("NewUserWindow", "&Female", 0));
        lbl_age->setText(QApplication::translate("NewUserWindow", "Age", 0));
        dateEdit_dob->setDisplayFormat(QApplication::translate("NewUserWindow", "dd/MM/yyyy", 0));
        lbl_weight->setText(QApplication::translate("NewUserWindow", "Weight in kg", 0));
        lbl_physician->setText(QApplication::translate("NewUserWindow", "Physician", 0));
        lbl_refphysician->setText(QApplication::translate("NewUserWindow", "Ref. Physician", 0));
        lbl_department->setText(QApplication::translate("NewUserWindow", "Department", 0));
        btn_editphysician->setText(QApplication::translate("NewUserWindow", "Add", 0));
        btn_editrefphysician->setText(QApplication::translate("NewUserWindow", "Add", 0));
        btn_editdepartment->setText(QApplication::translate("NewUserWindow", "Add", 0));
        btn_reset->setText(QApplication::translate("NewUserWindow", "Reset", 0));
        btn_ok->setText(QApplication::translate("NewUserWindow", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class NewUserWindow: public Ui_NewUserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSERWINDOW_H
