/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *pushFind;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QLineEdit *latitude_2;
    QLineEdit *longitude_2;
    QLineEdit *peleng_2;
    QPushButton *pushCoordinatesStation;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *latitude_3;
    QLineEdit *longitude_3;
    QLineEdit *peleng_3;
    QPushButton *pushCoordinatesStation_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *latitude_4;
    QLineEdit *longitude_4;
    QLineEdit *peleng_4;
    QPushButton *pushCoordinatesStation_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *latitude;
    QLineEdit *longitude;
    QPushButton *pushCoordinates;
    QWidget *widget;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_10;
    QLabel *xRes;
    QLabel *yRes;
    QPushButton *pushDelete;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(831, 650);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 20, 600, 600));
        pushFind = new QPushButton(centralwidget);
        pushFind->setObjectName(QString::fromUtf8("pushFind"));
        pushFind->setGeometry(QRect(621, 460, 201, 25));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(620, 140, 201, 298));
        verticalLayout_8 = new QVBoxLayout(layoutWidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_8->addWidget(label_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_2->addWidget(label_10);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        latitude_2 = new QLineEdit(layoutWidget);
        latitude_2->setObjectName(QString::fromUtf8("latitude_2"));

        horizontalLayout->addWidget(latitude_2);

        longitude_2 = new QLineEdit(layoutWidget);
        longitude_2->setObjectName(QString::fromUtf8("longitude_2"));

        horizontalLayout->addWidget(longitude_2);

        peleng_2 = new QLineEdit(layoutWidget);
        peleng_2->setObjectName(QString::fromUtf8("peleng_2"));

        horizontalLayout->addWidget(peleng_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        pushCoordinatesStation = new QPushButton(layoutWidget);
        pushCoordinatesStation->setObjectName(QString::fromUtf8("pushCoordinatesStation"));

        verticalLayout_2->addWidget(pushCoordinatesStation);


        verticalLayout_8->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_3->addWidget(label_11);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        latitude_3 = new QLineEdit(layoutWidget);
        latitude_3->setObjectName(QString::fromUtf8("latitude_3"));

        horizontalLayout_4->addWidget(latitude_3);

        longitude_3 = new QLineEdit(layoutWidget);
        longitude_3->setObjectName(QString::fromUtf8("longitude_3"));

        horizontalLayout_4->addWidget(longitude_3);

        peleng_3 = new QLineEdit(layoutWidget);
        peleng_3->setObjectName(QString::fromUtf8("peleng_3"));

        horizontalLayout_4->addWidget(peleng_3);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_4);

        pushCoordinatesStation_2 = new QPushButton(layoutWidget);
        pushCoordinatesStation_2->setObjectName(QString::fromUtf8("pushCoordinatesStation_2"));

        verticalLayout_3->addWidget(pushCoordinatesStation_2);


        verticalLayout_8->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_5->addWidget(label_12);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        latitude_4 = new QLineEdit(layoutWidget);
        latitude_4->setObjectName(QString::fromUtf8("latitude_4"));

        horizontalLayout_6->addWidget(latitude_4);

        longitude_4 = new QLineEdit(layoutWidget);
        longitude_4->setObjectName(QString::fromUtf8("longitude_4"));

        horizontalLayout_6->addWidget(longitude_4);

        peleng_4 = new QLineEdit(layoutWidget);
        peleng_4->setObjectName(QString::fromUtf8("peleng_4"));

        horizontalLayout_6->addWidget(peleng_4);


        verticalLayout_6->addLayout(horizontalLayout_6);


        verticalLayout_5->addLayout(verticalLayout_6);

        pushCoordinatesStation_3 = new QPushButton(layoutWidget);
        pushCoordinatesStation_3->setObjectName(QString::fromUtf8("pushCoordinatesStation_3"));

        verticalLayout_5->addWidget(pushCoordinatesStation_3);


        verticalLayout_8->addLayout(verticalLayout_5);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(620, 20, 201, 91));
        verticalLayout_9 = new QVBoxLayout(layoutWidget1);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_9->addWidget(label_2);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_9->addWidget(label);


        verticalLayout_7->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        latitude = new QLineEdit(layoutWidget1);
        latitude->setObjectName(QString::fromUtf8("latitude"));

        horizontalLayout_7->addWidget(latitude);

        longitude = new QLineEdit(layoutWidget1);
        longitude->setObjectName(QString::fromUtf8("longitude"));

        horizontalLayout_7->addWidget(longitude);


        verticalLayout_7->addLayout(horizontalLayout_7);


        verticalLayout_9->addLayout(verticalLayout_7);

        pushCoordinates = new QPushButton(layoutWidget1);
        pushCoordinates->setObjectName(QString::fromUtf8("pushCoordinates"));

        verticalLayout_9->addWidget(pushCoordinates);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(620, 487, 201, 131));
        verticalLayout_11 = new QVBoxLayout(widget);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_11->addWidget(label_13);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        xRes = new QLabel(widget);
        xRes->setObjectName(QString::fromUtf8("xRes"));

        verticalLayout_10->addWidget(xRes);

        yRes = new QLabel(widget);
        yRes->setObjectName(QString::fromUtf8("yRes"));

        verticalLayout_10->addWidget(yRes);


        verticalLayout_11->addLayout(verticalLayout_10);

        pushDelete = new QPushButton(widget);
        pushDelete->setObjectName(QString::fromUtf8("pushDelete"));

        verticalLayout_11->addWidget(pushDelete);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushFind->setText(QCoreApplication::translate("MainWindow", "\320\275\320\260\320\271\321\202\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\320\275\321\206\320\270\320\270:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\273\320\263\320\276\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\200\320\276\321\202\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\320\273\320\265\320\275\320\263", nullptr));
        pushCoordinatesStation->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\273\320\263\320\276\321\202\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\200\320\276\321\202\320\260", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\320\273\320\265\320\275\320\263", nullptr));
        pushCoordinatesStation_2->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\273\320\263\320\276\321\202\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\200\320\276\321\202\320\260", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\320\273\320\265\320\275\320\263", nullptr));
        pushCoordinatesStation_3->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\273\320\263\320\276\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\200\320\276\321\202\320\260", nullptr));
        pushCoordinates->setText(QCoreApplication::translate("MainWindow", "\320\267\320\260\320\264\320\260\321\202\321\214", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        xRes->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        yRes->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushDelete->setText(QCoreApplication::translate("MainWindow", "\321\201\320\261\321\200\320\276\321\201\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
