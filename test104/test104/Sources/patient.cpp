#include "Headers/patient.h"

Patient::Patient(){
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

QString Patient::get_id(){
    return this->id;
}

QString Patient::get_lastname(){
    return this->lastname;
}

QString Patient::get_prefix(){
    return this->prefix;
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

void Patient::set_id(QString id){
    this->id = id;
}

void Patient::set_lastname(QString lastname){
    this->lastname = lastname;
}

void Patient::set_prefix(QString prefix){
    this->prefix = prefix;
}
