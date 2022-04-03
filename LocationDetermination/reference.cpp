#include "reference.h"
#include "ui_reference.h"

Reference::Reference(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reference)
{
    ui->setupUi(this);
    scene= new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    QImage picText(QDir::currentPath()+"/../images/reference.png");
    picText = picText.scaled(590,picText.height(),Qt::KeepAspectRatio);
    scene->addPixmap(QPixmap::fromImage(picText));

}

Reference::~Reference()
{
    delete ui;
}
