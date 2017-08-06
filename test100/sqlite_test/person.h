#ifndef PERSON_H
#define PERSON_H

#include <QtGui>
#include <QtCore>

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
