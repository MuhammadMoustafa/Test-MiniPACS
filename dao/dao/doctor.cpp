#include "doctor.h"

Doctor::Doctor()
{

}

QString Doctor::get_address(){
    return this->address;
}

QString Doctor::get_birthday(){
    return this->birthday;
}

QString Doctor::get_firstname(){
    return this->firstname;
}

QString Doctor::get_gender(){
    return this->gender;
}

int Doctor::get_id(){
    return this->id;
}

QString Doctor::get_lastname(){
    return this->lastname;
}

QString Doctor::get_middlename(){
    return this->middlename;
}


void Doctor::set_address(QString address){
    this->address = address;
}

void Doctor::set_birthday(QString birthday){
    this->birthday = birthday;
}

void Doctor::set_firstname(QString firstname){
    this->firstname = firstname;
}

void Doctor::set_gender(QString gender){
    this->gender = gender;
}

void Doctor::set_id(int id){
    this->id = id;
}

void Doctor::set_lastname(QString lastname){
    this->lastname = lastname;
}

void Doctor::set_middlename(QString middlename){
    this->middlename = middlename;
}
