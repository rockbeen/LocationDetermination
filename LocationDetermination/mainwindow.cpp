#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    reference = new Reference();

    ui->setupUi(this);
    scene= new QGraphicsScene();
    ui->graphicsView->setScene(scene);

    ui->xRes->clear();
    ui->yRes->clear();

    QImage pictureStation(QDir::currentPath()+"/../images/station.png");
    pictureStation = pictureStation.scaled(40,40,Qt::KeepAspectRatio);

    QImage pictureStationResult(QDir::currentPath()+"/../images/resultStation.png");
    pictureStationResult = pictureStationResult.scaled(40,40,Qt::KeepAspectRatio);


    QImage Map(QDir::currentPath()+"/../images/map.png");

    scene->addPixmap(QPixmap::fromImage(Map));
    scene->setSceneRect(0,0,Map.width(),Map.height());
    ui->graphicsView->update();


    station1.picstation = new QGraphicsPixmapItem(QPixmap::fromImage(pictureStation));
    station2.picstation = new QGraphicsPixmapItem(QPixmap::fromImage(pictureStation));
    station3.picstation = new QGraphicsPixmapItem(QPixmap::fromImage(pictureStation));
    picStationResult = new QGraphicsPixmapItem(QPixmap::fromImage(pictureStationResult));


    station1.ISstation=false;
    station2.ISstation=false;
    station3.ISstation=false;
    StationResult.ISstation=false;
    line1 = new QGraphicsLineItem();
    line2 = new QGraphicsLineItem();
    line3 = new QGraphicsLineItem();


    sizeArrayWidth = Map.width()/100+1;
    sizeArrayHeight = Map.height()/100+1;
    textWidth = new QGraphicsTextItem[sizeArrayWidth];
    textHeight  = new QGraphicsTextItem[sizeArrayHeight];

}

MainWindow::~MainWindow()
{
    delete ui;
}
bool MainWindow::interpretation(double& x0, double& y0)
{
     double xRes;
     double yRes;
     xRes =(x0 - Latitude)*100;
     yRes =(y0 - Longitude)*100;

     if(x0<Latitude || y0<Longitude || xRes>scene->width() || yRes>scene->height())
     {
        return false;
     }
     else{
       x0=xRes;
       y0=scene->height()-yRes-50;
       return true;
     }

}

void MainWindow::on_pushCoordinates_clicked()
{

    if( ui->latitude->text().isEmpty()||ui->longitude->text().isEmpty())
    {
        error_message("Input error","Some parameters are not set");
    }
    else{
        bool isOkLatitude = false;
        bool isOkLongitude = false;

        Latitude = ui->latitude->text().toInt(&isOkLatitude);
        Longitude = ui->longitude->text().toInt(&isOkLongitude);

        if(!(0 < Longitude && Longitude < 70 )|| !( 0<=Latitude && Latitude<=170 ))
        {
                error_message("Input error","The latitude or longitude is set incorrectly");
        }
        else
        {
            if(isOkLatitude && isOkLongitude)
            {
                if( setGrid==false)
                {
                    for(int i=0, j=0;i<scene->width();i+=100,++j)
                    {
                        scene->addLine(i,0,i,scene->height());

                        QString text = QString::number(Latitude+j);

                        textWidth[j].setPos(i+10,0);
                        textWidth[j].setDefaultTextColor(QColor(255,255,255)) ;

                        textWidth[j].setPlainText(text);
                        scene->addItem(textWidth+j);

                    }
                    for(int i=0, j=0;i<scene->height();i+=100,++j)
                    {
                        scene->addLine(0,i,scene->width(),i);

                         QString text = QString::number(Longitude+sizeArrayHeight-j-1);

                        textHeight[j].setPos(0,i+10);
                        textHeight[j].setDefaultTextColor(QColor(255,255,255)) ;
                        textHeight[j].setPlainText(text);
                        scene->addItem(textHeight+j);
                    }
                     setGrid=true;
                }
                else{
                    Latitude = ui->latitude->text().toDouble();

                    Longitude = ui->longitude->text().toDouble();

                    for(int i=0, j=0;i<scene->width();i+=100,++j)
                    {


                        QString text = QString::number(Latitude+j);

                        textWidth[j].setPos(i+10,0);
                        textWidth[j].setDefaultTextColor(QColor(255,255,255)) ;

                        textWidth[j].setPlainText(text);


                    }
                    for(int i=0, j=0;i<scene->height();i+=100,++j)
                    {


                         QString text = QString::number(Longitude+sizeArrayHeight-j-1);

                        textHeight[j].setPos(0,i+10);
                        textHeight[j].setDefaultTextColor(QColor(255,255,255)) ;
                        textHeight[j].setPlainText(text);

                    }
                }
            }
            else{
                   error_message("Input error","Incorrect input");
            }
        }
    }
}


void MainWindow::readData(StationXYPI& station)
{

           station.xOnMap=station.y;
           station.yOnMap=station.x;

           if(interpretation(station.xOnMap,station.yOnMap)&&(station.peleng>=0 && station.peleng<=360))
           {
               if(!station.ISstation)
               {
                   station.picstation->setPos(station.xOnMap,station.yOnMap);
                   scene->addItem(station.picstation);
                   station.ISstation=true;

                   ui->graphicsView->update();

               }
               else
               {
                   scene->removeItem(station.picstation);
                   station.picstation->setPos(station.xOnMap,station.yOnMap);
                   scene->addItem(station.picstation);
                   ui->graphicsView->update();
               }
            }
            else{
               error_message("Input error","Incorrect input / The specified parameters may go beyond the map");

            }

}





void MainWindow::on_pushCoordinatesStation_clicked()
{
    if(setGrid)
    {
        if(ui->latitude_2->text().isEmpty()||ui->longitude_2->text().isEmpty()||ui->peleng_2->text().isEmpty()||ui->latitude_3->text().isEmpty()||ui->longitude_3->text().isEmpty()
                ||ui->peleng_3->text().isEmpty()||ui->latitude_4->text().isEmpty()||ui->longitude_4->text().isEmpty()||ui->peleng_4->text().isEmpty())
        {
            error_message("Input error","Some parameters are not set");
        }
        else{

        station1.y =ui->latitude_2->text().toDouble();
        station1.x = ui->longitude_2->text().toDouble();
        station1.peleng = ui->peleng_2->text().toDouble();

        station2.y =ui->latitude_3->text().toDouble();
        station2.x = ui->longitude_3->text().toDouble();
        station2.peleng = ui->peleng_3->text().toDouble();

        station3.y =ui->latitude_4->text().toDouble();
        station3.x = ui->longitude_4->text().toDouble();
        station3.peleng = ui->peleng_4->text().toDouble();

        readData(station1);
        readData(station2);
        readData(station3);
        }
    }
    else{
        error_message("Input error","Geographical coordinates are not set");

    }
}


void MainWindow::error_message(QString heading,  QString text)
{
    QMessageBox::information(this,
                           QString(heading),
                           QString(text));
}

void MainWindow::countResult(double& Xresult,  double& Yresult)
{

    double Xres1,Yres1,Xres2,Yres2,Xres3,Yres3;


    station1.y*=coefficient;
    station2.y*=coefficient;
    station3.y*=coefficient;

    station1.peleng=((station1.peleng)*M_PI)/180.0;
    station2.peleng=((station2.peleng)*M_PI)/180.0;
    station3.peleng=((station3.peleng)*M_PI)/180.0;



    double numerator1=(-station2.x*tan(station2.peleng)*(1.0/tan(station1.peleng))+station2.y*(1.0/tan(station1.peleng))-station1.y*(1.0/tan(station1.peleng))+station1.x);
    double denominator1=(1.0-tan(station2.peleng)*(1.0/tan(station1.peleng)));

    double numerator2=(-station1.x*tan(station1.peleng)*(1.0/tan(station3.peleng))+station1.y*(1.0/tan(station3.peleng))-station3.y*(1.0/tan(station3.peleng))+station3.x);
    double denominator2=(1.0-tan(station1.peleng)*(1.0/tan(station3.peleng)));

    double numerator3=(-station3.x*tan(station3.peleng)*(1.0/tan(station2.peleng))+station3.y*(1.0/tan(station2.peleng))-station2.y*(1.0/tan(station2.peleng))+station2.x);
    double denominator3=(1.0-tan(station3.peleng)*(1.0/tan(station2.peleng)));


    if(denominator1==0)
    {
        Xres2=numerator2/denominator2;
        Yres2=(Xres2-station1.x)*tan(station1.peleng)+station1.y;

         Xres3=numerator3/denominator3;
         Yres3=(Xres3-station3.x)*tan(station3.peleng)+station3.y;

         Xresult=(Xres2+Xres3)/2;
         Yresult=(Yres2+Yres3)/2;


    }
    else if (denominator2==0)
    {
         Xres1=numerator1/denominator1;
         Yres1=(Xres1-station2.x)*tan(station2.peleng)+station2.y;
         Xres3=numerator3/denominator3;
         Yres3=(Xres3-station3.x)*tan(station3.peleng)+station3.y;

         Xresult=(Xres1+Xres3)/2;
         Yresult=(Yres1+Yres3)/2;


    }
    else if (denominator3==0){
         Xres1=numerator1/denominator1;
         Yres1=(Xres1-station2.x)*tan(station2.peleng)+station2.y;
         Xres2=numerator2/denominator2;
         Yres2=(Xres2-station1.x)*tan(station1.peleng)+station1.y;

         Xresult=(Xres2+Xres1)/2;
         Yresult=(Yres2+Yres1)/2;


    }
    else{
         Xres1=numerator1/denominator1;
         Yres1=(Xres1-station2.x)*tan(station2.peleng)+station2.y;
         Xres2=numerator2/denominator2;
         Yres2=(Xres2-station1.x)*tan(station1.peleng)+station1.y;
         Xres3=numerator3/denominator3;
         Yres3=(Xres3-station3.x)*tan(station3.peleng)+station3.y;

         Xresult=(Xres2+Xres1+Xres3)/3;
         Yresult=(Yres2+Yres1+Yres3)/3;
    }


}

void MainWindow::on_pushFind_clicked()
{
    if(station1.ISstation && station2.ISstation && station3.ISstation && setGrid)
    {
        on_pushCoordinatesStation_clicked();

        double xOnMap,yOnMap,XresultAverage,YresultAverage=0;

        countResult(XresultAverage,YresultAverage);//точность

             xOnMap=YresultAverage;
             yOnMap=XresultAverage;
             QPen penColor(Qt::red);
             int sprite=20;

            if(interpretation(xOnMap,yOnMap))
            {
                if(!StationResult.ISstation)
                {
                    picStationResult->setPos(xOnMap,yOnMap);
                    scene->addItem(picStationResult);
                    StationResult.ISstation=true;

                        line1 = scene->addLine(station1.xOnMap,station1.yOnMap,xOnMap+sprite,yOnMap+sprite,penColor);


                        line2 = scene->addLine(station2.xOnMap,station2.yOnMap,xOnMap+sprite,yOnMap+sprite,penColor);
                        line3 = scene->addLine(station3.xOnMap,station3.yOnMap,xOnMap+sprite,yOnMap+sprite,penColor);
                         ui->graphicsView->update();

                        ui->xRes->setText(QString::number(XresultAverage));
                        ui->yRes->setText(QString::number(YresultAverage));



                }
                else
                {
                    scene->removeItem(line1);
                    scene->removeItem(line2);
                    scene->removeItem(line3);
                    scene->removeItem(picStationResult);

                    picStationResult->setPos(xOnMap,yOnMap);
                    scene->addItem(picStationResult);


                       line1 =  scene->addLine(station1.xOnMap,station1.yOnMap,xOnMap+sprite,yOnMap+sprite,penColor);
                       line2 = scene->addLine(station2.xOnMap,station2.yOnMap,xOnMap+sprite,yOnMap+sprite,penColor);
                       line3 =  scene->addLine(station3.xOnMap,station3.yOnMap,xOnMap+sprite,yOnMap+sprite,penColor);
                    ui->graphicsView->update();


                    ui->xRes->setText(QString::number(XresultAverage));
                    ui->yRes->setText(QString::number(YresultAverage));


                }
            }
            else{
                error_message("Error ","Incorrect data");

            }


    }
    else{

        error_message("Error ","Check if the grids and stations are set");
    }

}

void MainWindow::on_pushDelete_clicked()
{
    if(StationResult.ISstation)
    {
    scene->removeItem(line1);
    scene->removeItem(line2);
    scene->removeItem(line3);
    scene->removeItem(picStationResult);
    StationResult.ISstation=false;

    }
    if(station1.ISstation)
    {
        scene->removeItem(station1.picstation);
        station1.ISstation=false;

    }
    if(station2.ISstation)
    {
        scene->removeItem(station2.picstation);
        station2.ISstation=false;

    }
    if(station3.ISstation)
    {
        scene->removeItem(station3.picstation);
        station3.ISstation=false;

    }

    ui->graphicsView->update();
}

void MainWindow::on_pushButton_clicked()
{
    reference->show();
    reference->setWindowTitle("Reference");
    reference->setFixedSize(640,640);


}
