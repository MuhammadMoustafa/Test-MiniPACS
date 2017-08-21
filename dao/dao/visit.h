#ifndef VISIT_H
#define VISIT_H

#include <QtSql/QtSql>

struct Visit
{
public:
    Visit();

    void set_id(int id);
    int get_id();

    void set_patient_id(int patient_id);
    int get_patient_id();

    void set_doctor_id(int doctor_id);
    int get_doctor_id();

    void set_date(QString date);
    QString get_date();

private:

    int id;
    int patient_id;
    int doctor_id;
    QString date;
};

#endif // VISIT_H
