#include "plooter.h"
#include <QApplication>
#include <QDebug>
#include <QtCore//QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc,argv);

    QString Palabra ="primeroa purba de oad";

    qDebug()<<Palabra;

    return a.exec();
}
