#ifndef DOCTOR_H
#define DOCTOR_H
#include <QtSql/QtSql>

struct Doctor
{
public:
    Doctor();

    int get_id();
    void set_id(int id);

    QString get_firstname();
    void set_firstname(QString firstname);

    QString get_middlename();
    void set_middlename(QString middlename);

    QString get_lastname();
    void set_lastname(QString lastname);

    QString get_gender();
    void set_gender(QString gender);

    QString get_birthday();
    void set_birthday(QString birthday);

    QString get_address();
    void set_address(QString address);

private:
    int id;
    QString firstname;
    QString middlename;
    QString lastname;
    QString gender;
    QString birthday;
    QString address;
};

#endif // DOCTOR_H
