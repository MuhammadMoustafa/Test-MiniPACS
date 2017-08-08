#ifndef PERSON_H
#define PERSON_H

#include <QtCore>

/**
    Data members of classes, both static and non-static, are named like ordinary nonmember variables, but with a trailing underscore.

    Use a struct only for passive objects that carry data; everything else is a class.

    so Person and patient_image should be structs
 */
class Person
{
    
public:
    int id;
    QString name;
    int age;
    QString address;

    Person();
    Person(QString, int, QString);
};

#endif // PERSON_H
