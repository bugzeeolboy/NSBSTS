#include "launcher.h"
#include "buddylist.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    launcher w;
    w.show();
    return a.exec();
}

