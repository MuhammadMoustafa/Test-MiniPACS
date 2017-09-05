#include "disease.h"


Disease::Disease()
{

}

QString Disease::get_disease(){
    return this->disease;
}

int Disease::get_patient_id(){
    return this->patient_id;
}

void Disease::set_disease(QString disease){
    this->disease = disease;
}

void Disease::set_patient_id(int patient_id){
    this->patient_id = patient_id;
}
