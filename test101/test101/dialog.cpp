#include "dialog.h"
#include "ui_dialog.h"
#include <QtWidgets>
#include <QLabel>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
/*
    QLabel label("asdasfafsas");
    QPixmap pixmap("4.png");
    label.setPixmap(pixmap);
    label.show();
*/

    QLabel *label = new QLabel("Hello Qt!");

    //label2.show();
    QPixmap pixmap("4.png");
    label->setPixmap(pixmap);
    label->setMask(pixmap.mask());
    label->show();

/*
    QLabel label2("adsads");
    QPixmap pixmap("4.png");
    label2.setPixmap(pixmap);
    label2.setMask(pixmap.mask());
    label2.show();
*/
    /*
    QLabel label;
    label.setGeometry(0,0,100,100);
    label.setText("sdfdsfdsg");
    label.show();
    label.
    */
    //scene = new QGraphicsScene(this);


    //QPixmap outPixmap = QPixmap("4.png");
    //outPixmap.loadFromData( "4.png" );

    //QGraphicsPixmapItem item(outPixmap);
    //scene->addPixmap(outPixmap);
    //QLabel myLabel;
    //myLabel.setPixmap( outPixmap );
    //myLabel.show();

    /*
    QPixmap outPixmap("4.png");
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(outPixmap);
    scene->addItem(item);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();

    QPixmap outPixmap2("3.png");
    QGraphicsPixmapItem* item2 = new QGraphicsPixmapItem(outPixmap2);

    scene->addItem(item2);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();
    */

    /*
    QImage image("4.png");
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(image));
    scene->addItem(item);
    //ui->graphicsView->setScene(scene);
    ui->graphicsView->show();

    QImage image2("3.png");
    QGraphicsPixmapItem* item2 = new QGraphicsPixmapItem(QPixmap::fromImage(image2));
    scene->addItem(item2);

    ui->graphicsView->setScene(scene);

    */

    //ui->graphicsView->show();
    //scene->addItem(&item);
    //scene->addText("asdasfskfjlsajfsaf");
    //ui->graphicsView->show();

}

Dialog::~Dialog()
{
    delete ui;
}