#ifndef DOCTOR_MOBILE_H
#define DOCTOR_MOBILE_H

#include <QtSql/QtSql>

/*
 * struct's name convention is UpperCase but it is named Upper_Case after the table name in SQLLite
 * Sqlite is case insensitive so it will work fine
*/
struct Doctor_Mobile
{
public:
    Doctor_Mobile();

    void set_doctor_id(int doctor_id);
    int get_doctor_id();

    void set_mobile(QString mobile);
    QString get_mobile();

private:
    int doctor_id;
    QString mobile;
};

#endif // DOCTOR_MOBILE_H
