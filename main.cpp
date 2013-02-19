#include "resourcemainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ResourceMainWindow w;
    w.show();
    
    return a.exec();
}
