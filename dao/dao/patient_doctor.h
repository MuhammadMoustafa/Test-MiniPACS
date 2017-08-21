#ifndef PATIENT_DOCTOR_H
#define PATIENT_DOCTOR_H

#include <QtSql/QtSql>

struct Patient_Doctor
{
public:
    Patient_Doctor();

    void set_patient_id(int patient_id);
    int get_patient_id();

    void set_doctor_id(int patient_id);
    int get_doctor_id();

private:
    int patient_id;
    int doctor_id;
};

#endif // PATIENT_DOCTOR_H
