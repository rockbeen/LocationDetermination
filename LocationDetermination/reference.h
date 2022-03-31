#ifndef REFERENCE_H
#define REFERENCE_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QDir>
namespace Ui {
class Reference;
}

class Reference : public QWidget
{
    Q_OBJECT

public:
    explicit Reference(QWidget *parent = nullptr);
    ~Reference();

private:
    Ui::Reference *ui;
    QGraphicsScene *scene;
    QGraphicsPixmapItem *picText;

};

#endif // REFERENCE_H
