#include "dialog.h"
#include "ui_dialog.h"
#include <QtWidgets>
#include <QLabel>

Dialog::Dialog(QVector <QByteArray> & images, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    for (int i = 0; i < images.length(); i++){
    QLabel *label = new QLabel(this);

    int width =500;
    int height =300;
    label->setGeometry(i*width, 0*height, (i+1)*width, (0+1)*height);
    //label->setText("sasdasdkjadskj");
    QPixmap pixmap = QPixmap();
    pixmap.loadFromData(images.at(i));
    label->setPixmap(pixmap.scaled(label->size(), Qt::KeepAspectRatio));
    label->show();
    }
}

Dialog::~Dialog()
{
    delete ui;
}
