#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int numero1=15;
    int numero2=48;
    bool condicion=numero2>numero1;

    /********* Codicional simple*/

//    if(condicion){
//        qDebug()<<"Bienvenidos a programacion QT";
//    }

    /******** Condicional ELSE */

    if(numero1>numero2){
        qDebug()<<"el numero"<<numero2<<"es mayor que"<<numero1;
    }else{
        qDebug()<<"el numero"<<numero2<<"no es mayor que"<<numero1;
    }

    return a.exec();
}
