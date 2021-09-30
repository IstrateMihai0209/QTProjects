#include "mainwindow.h"
#include <QApplication> //handles widgets, events, mouse moving

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //creates the application object
    MainWindow w; //create the main application object
    w.show(); //display the application

    return a.exec(); //puts the application into a loop
}
