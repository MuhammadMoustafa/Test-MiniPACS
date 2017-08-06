#include "person.h"

Person::Person()
{

}

Person::Person(QString name, int age, QString address)
{
    this->name = name;
    this->age = age;
    this->address = address;
}

