#ifndef PATIENT_H
#define PATIENT_H

#include <QtCore>

struct Patient
{
public:
    Patient();

    QString get_id();
    void set_id(QString id);

    QString get_firstname();
    void set_firstname(QString firstname);

    QString get_prefix();
    void set_prefix(QString prefix);

    QString get_lastname();
    void set_lastname(QString lastname);

    QString get_gender();
    void set_gender(QString gender);

    QString get_birthday();
    void set_birthday(QString birthday);


private:
    QString id;
    QString firstname;
    QString prefix;
    QString lastname;
    QString gender;
    QString birthday;
};

#endif // PATIENT_H
