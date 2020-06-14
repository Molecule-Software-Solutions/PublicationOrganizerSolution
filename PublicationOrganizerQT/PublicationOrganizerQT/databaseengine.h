#ifndef DATABASEENGINE_H
#define DATABASEENGINE_H

#include <QSql>
#include <QSqlDatabase>
#include "publicationorganizerdialog.h"

class DatabaseEngine
{
public:
    PublicationOrganizerDialog dialog;
    DatabaseEngine();
    ~DatabaseEngine();

    // Public Functions
    void CreateDatabase();
};

#endif // DATABASEENGINE_H
