
#include <QCoreApplication>
#include <QtWidgets>
#include "sifluidwindow.h"

int main(int argc, char ** argv)
{
    QCoreApplication app(argc, argv);

    SIFluidWindow gameWindow;
    gameWindow.show();

    return app.exec();
}
