#include "lopatool.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LOPATool w;
    w.show();
    return a.exec();
}
