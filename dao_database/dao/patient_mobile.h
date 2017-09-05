#ifndef PATIENT_MOBILE_H
#define PATIENT_MOBILE_H

#include <QtSql/QtSql>

struct Patient_Mobile
{
public:
    Patient_Mobile();

    void set_patient_id(int patient_id);
    int get_patient_id();

    void set_mobile(QString mobile);
    QString get_mobile();

private:
    int patient_id;
    QString mobile;
};

#endif // PATIENT_MOBILE_H
