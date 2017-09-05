#include "patient_doctor.h"

Patient_Doctor::Patient_Doctor(){
}

int Patient_Doctor::get_doctor_id(){
    return this->doctor_id;
}

int Patient_Doctor::get_patient_id(){
    return this->patient_id;
}

void Patient_Doctor::set_doctor_id(int doctor_id){
    this->doctor_id = doctor_id;
}

void Patient_Doctor::set_patient_id(int patient_id){
    this->patient_id = patient_id;
}
