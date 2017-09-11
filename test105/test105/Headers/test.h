#ifndef TEST_H
#define TEST_H

#include <QMainWindow>
#include "Headers/newpatientwindow.h"
#include "Headers/existingpatientwindow.h"
#include "Headers/patient.h"

class NewPatientWindow;
class ExistingPatientWindow;

namespace Ui {
class test;
}

class test : public QMainWindow
{
    Q_OBJECT

public:
    explicit test(Patient patient, NewPatientWindow *parent = 0);
    explicit test(Patient patient, ExistingPatientWindow *parent = 0);

    ~test();

private:
    Ui::test *ui;
    void closeEvent(QCloseEvent *event);

    NewPatientWindow* newpatientwindow;
    ExistingPatientWindow * exisitngpatientwindow;
    Patient patient;

    bool fromNewWindow;


};

#endif // TEST_H
