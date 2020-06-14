#include "testform.h"
#include "mainmenu.h"
#include "databaseengine.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DatabaseEngine dbe;
    dbe.CreateDatabase();
    MainMenu mm;
    mm.show();

    return a.exec();
}
