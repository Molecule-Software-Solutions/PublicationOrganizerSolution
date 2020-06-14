#include "databaseengine.h"
#include <winsqlite/winsqlite3.h>

DatabaseEngine::DatabaseEngine()
{

}

DatabaseEngine::~DatabaseEngine()
{

}

void DatabaseEngine::CreateDatabase()
{
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("PublicationData.db");
    if(!database.open())
    {

    }
}
