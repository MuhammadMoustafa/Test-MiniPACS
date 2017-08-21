#include "patient.h"

Patient::Patient(){
}

QString Patient::get_address(){
    return this->address;
}

QString Patient::get_birthday(){
    return this->birthday;
}

QString Patient::get_firstname(){
    return this->firstname;
}

QString Patient::get_gender(){
    return this->gender;
}

int Patient::get_id(){
    return this->id;
}

QString Patient::get_lastname(){
    return this->lastname;
}

QString Patient::get_middlename(){
    return this->middlename;
}


void Patient::set_address(QString address){
    this->address = address;
}

void Patient::set_birthday(QString birthday){
    this->birthday = birthday;
}

void Patient::set_firstname(QString firstname){
    this->firstname = firstname;
}

void Patient::set_gender(QString gender){
    this->gender = gender;
}

void Patient::set_id(int id){
    this->id = id;
}

void Patient::set_lastname(QString lastname){
    this->lastname = lastname;
}

void Patient::set_middlename(QString middlename){
    this->middlename = middlename;
}
