#ifndef DATABASEENGINE_H
#define DATABASEENGINE_H

#include <QSql>
#include <QSqlDatabase>
#include "publicationorganizerdialog.h"

class DatabaseEngine
{
public:
    DatabaseEngine();
    ~DatabaseEngine();
    // Public Members
    QSqlDatabase ReturnDatabase();
};

#endif // DATABASEENGINE_H
