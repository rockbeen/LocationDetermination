#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <cmath>
#include <QMessageBox>
#include <QDir>
#include "reference.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushCoordinates_clicked();

    void on_pushCoordinatesStation_clicked();

    void on_pushFind_clicked();

    void on_pushDelete_clicked();

    void on_pushButton_clicked();

private:
    struct StationXYPI
    {
        bool ISstation;
        double x;
        double y;
        double xOnMap;
        double yOnMap;
        double peleng;
        QGraphicsPixmapItem *picstation;
    };
    bool interpretation(double& x0, double& y0);
    void error_message(QString heading,  QString text);
    void countResult(double& Xresult,  double& Yresult);
    void readData(StationXYPI& station);

    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    Reference *reference;

    double Latitude;
    double Longitude;
    //QGraphicsPixmapItem *picStation1;
    //QGraphicsPixmapItem *picStation2;
    //QGraphicsPixmapItem *picStation3;
    QGraphicsPixmapItem *picStationResult;
    QImage pictureStation;
    QGraphicsTextItem * textWidth;
    QGraphicsTextItem * textHeight;
    QGraphicsLineItem *line1,*line2,*line3;
    int sizeArrayWidth;
    int sizeArrayHeight;
    bool setGrid=false;

    StationXYPI station1,station2,station3,StationResult;

    double coefficient=0.975;


};
#endif // MAINWINDOW_H
