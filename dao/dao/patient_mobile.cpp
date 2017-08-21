#include "patient_mobile.h"

Patient_Mobile::Patient_Mobile(){
}

int Patient_Mobile::get_patient_id(){
    return this->patient_id;
}

QString Patient_Mobile::get_mobile(){
    return this->mobile;
}

void Patient_Mobile::set_patient_id(int patient_id){
    this->patient_id = patient_id;
}

void Patient_Mobile::set_mobile(QString mobile){
    this->mobile = mobile;
}
