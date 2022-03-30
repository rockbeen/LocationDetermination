#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Location determination");
    w.setFixedSize(830,650);

    w.show();
    return a.exec();
}
