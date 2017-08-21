#include "visit.h"

Visit::Visit(){
}

QString Visit::get_date(){
    return this->date;
}

int Visit::get_doctor_id(){
    return this->doctor_id;
}

int Visit::get_id(){
    return this->id;
}

int Visit::get_patient_id(){
    return this->patient_id;
}

void Visit::set_date(QString date){
    this->date = date;
}

void Visit::set_doctor_id(int doctor_id){
    this->doctor_id = doctor_id;
}

void Visit::set_id(int id){
    this->id = id;
}

void Visit::set_patient_id(int patient_id){
    this->patient_id = patient_id;
}
