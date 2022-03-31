/********************************************************************************
** Form generated from reading UI file 'reference.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REFERENCE_H
#define UI_REFERENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reference
{
public:
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Reference)
    {
        if (Reference->objectName().isEmpty())
            Reference->setObjectName(QString::fromUtf8("Reference"));
        Reference->resize(480, 640);
        gridLayout = new QGridLayout(Reference);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        graphicsView = new QGraphicsView(Reference);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);


        retranslateUi(Reference);

        QMetaObject::connectSlotsByName(Reference);
    } // setupUi

    void retranslateUi(QWidget *Reference)
    {
        Reference->setWindowTitle(QCoreApplication::translate("Reference", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reference: public Ui_Reference {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFERENCE_H
