#include "Headers/visit.h"

Visit::Visit(){
}

QString Visit::get_date(){
    return this->date;
}

QString Visit::get_physician(){
    return this->physician;
}

QString Visit::get_ref_physician(){
    return this->ref_physician;
}

QString Visit::get_department(){
    return this->department;
}

int Visit::get_id(){
    return this->id;
}

QString Visit::get_patient_id(){
    return this->patient_id;
}

void Visit::set_date(QString date){
    this->date = date;
}

void Visit::set_physician(QString physician){
    this->physician = physician;
}

void Visit::set_ref_physician(QString ref_physician){
    this->ref_physician = ref_physician;
}

void Visit::set_department(QString department){
    this->department = department;
}

void Visit::set_id(int id){
    this->id = id;
}

void Visit::set_patient_id(QString patient_id){
    this->patient_id = patient_id;
}
