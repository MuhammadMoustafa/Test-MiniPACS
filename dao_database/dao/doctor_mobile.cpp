#include "doctor_mobile.h"

Doctor_Mobile::Doctor_Mobile()
{

}

int Doctor_Mobile::get_doctor_id(){
    return this->doctor_id;
}

QString Doctor_Mobile::get_mobile(){
    return this->mobile;
}

void Doctor_Mobile::set_doctor_id(int doctor_id){
    this->doctor_id = doctor_id;
}

void Doctor_Mobile::set_mobile(QString mobile){
    this->mobile = mobile;
}
