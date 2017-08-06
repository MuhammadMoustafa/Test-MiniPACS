#include "patient_image.h"

Patient_Image::Patient_Image()
{

}

Patient_Image::Patient_Image(int id, QString filename, QByteArray image)
{
    this->id = id;
    this->filename = filename;
    this->image = image;
}
