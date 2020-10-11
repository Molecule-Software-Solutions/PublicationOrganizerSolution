#include "databaseengine.h"
#include <winsqlite/winsqlite3.h>
#include <QApplication>


DatabaseEngine::DatabaseEngine()
{

}

DatabaseEngine::~DatabaseEngine()
{

}

QSqlDatabase DatabaseEngine::ReturnDatabase()
{
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(QApplication::applicationDirPath() + "/PublicationData.db");
    return database;
}
