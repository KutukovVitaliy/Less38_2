#include <QtGui/QtGui>
#include <QApplication>

#include <QFuture>
#include <QtConcurrent/QtConcurrent>

#include <QGraphicsScene>
#include <QGraphicsBlurEffect>
#include <QGraphicsPixmapItem>

#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    return a.exec();
}
