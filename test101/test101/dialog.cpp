#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    QPixmap outPixmap = QPixmap();
    outPixmap.loadFromData( "4.png" );

    scene->addPixmap(outPixmap);
    scene->addText("asdasfskfjlsajfsaf");
    scene->add

}

Dialog::~Dialog()
{
    delete ui;
}
