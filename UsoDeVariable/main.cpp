#include <QCoreApplication>
#include <QDebug>
#include <limits>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    qDebug() << std::numeric_limits<short>::min();
//    qDebug() << std::numeric_limits<short>::max();

    int numero=12;
    double decimal1=3.1415;
    float decimal2=3.1f;
    char inicial='C';
    QChar caracter='o';
    std::string palabra="hola mundo";
    QString frase ="Bienvenidos al curso";
    unsigned  positivo=100;
    short corto=1;
    long long int masGrande=1000;
    long double muchoMayor=12.555;

//    qDebug() <<"int numero"<< numero;
//    qDebug()<<"double decimal"<<decimal1;
//    qDebug()<<"float deciml"<<decimal2;
//    qDebug()<<"char inicial"<<caracter;
//    qDebug()<<" Qchar caracter"<<caracter;
//    qDebug()<<"std::string palabra"<<QString::fromStdString(palabra);
//    qDebug()<<"QString frase"<<frase;
//    qDebug()<<"unsigned positivo"<<positivo;
//    qDebug()<<"short corto"<<corto;
//    qDebug()<<"long long int"<<masGrande;
//    qDebug()<<"long double"<<long(muchoMayor);

    int x=15;
    int y=48;
    int z=x+y;
    qDebug()<< y-x;
    return a.exec();
}
