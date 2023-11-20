#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug()<<"Mi primer programa en sonsola e QT  y C++";
    qDebug()<<"Hola mundo";
    qDebug()<<" Bienvenido a la clase";

    return a.exec();
}
