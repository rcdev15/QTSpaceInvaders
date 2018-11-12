#ifndef SIWINDOW_H
#define SIWINDOW_H

#include <QWidget>
#include <QLCDNumber>
#include "sifluidwindow.h"


class SIWindow : QWidget {

    Q_OBJECT

public:

    SIWindow( void );
    virtual ~SIWindow( void );

private:
    SIFluidWindow *gameWindow;

    QLCDNumber *levelCountLCD;

    QLCDNumber *scoreCountLCD;

    std::vector<QLCDNumber*> highScoresList;

};


#endif // SIWINDOW_H
