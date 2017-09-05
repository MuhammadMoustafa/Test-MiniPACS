#ifndef VISIT_H
#define VISIT_H

#include <QtCore>

struct Visit
{
public:
    Visit();

    void set_id(int id);
    int get_id();

    void set_patient_id(QString patient_id);
    QString get_patient_id();

    void set_physician(QString physician);
    QString get_physician();

    void set_ref_physician(QString ref_physician);
    QString get_ref_physician();

    void set_department(QString department);
    QString get_department();

    void set_date(QString date);
    QString get_date();

private:

    int id;
    QString patient_id;
    QString physician;
    QString date;
    QString ref_physician;
    QString department;
};

#endif // VISIT_H
