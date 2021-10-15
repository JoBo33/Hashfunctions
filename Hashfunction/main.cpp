

#include <QtWidgets>
#include "hash.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow mainWin;

    hash ha;
    mainWin.setCentralWidget(&ha);

    mainWin.show();

    return app.exec();
}
