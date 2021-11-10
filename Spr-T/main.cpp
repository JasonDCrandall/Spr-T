#include "sprt.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SprT w;
    w.show();
    return a.exec();
}
