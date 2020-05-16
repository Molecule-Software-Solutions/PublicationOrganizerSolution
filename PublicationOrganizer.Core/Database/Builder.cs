using Microsoft.Data.Sqlite;
using System;

namespace PublicationOrganizer.Core.Migration
{
    internal class Builder
    {
        /// <summary>
        /// Builds the initial database structures if the version is 0
        /// </summary>
        public void PerformDatabaseBuildout()
        {
            if(Utilities.GetDatabaseVersion() == 0)
            {
                using (SqliteConnection conn = new SqliteConnection(DBConnection.GetConnectionString()))
                {
                    using (SqliteCommand comm = new SqliteCommand(PerformDatabaseBuildoutCommandText(), conn))
                    {
                        // Opens the connection to the database 
                        comm.Connection.Open();
                        try
                        {
                            // Attempts to perform a table build via transaction 
                            comm.Transaction = comm.Connection.BeginTransaction();
                            comm.ExecuteNonQuery();
                            comm.Transaction.Commit(); 
                        }
                        catch (Exception)
                        {

                            throw;
                        }
                        finally
                        {
                            comm.Connection.Close();
                            comm.Connection.Dispose();
                            comm.Dispose(); 
                        }
                    }
                }
            }
        }

        /// <summary>
        /// command text (SQL) used to build the initial table structures 
        /// </summary>
        /// <returns></returns>
        private string PerformDatabaseBuildoutCommandText()
        {
            return @"CREATE TABLE IF NOT EXISTS Publications (
                        PublicationId   INTEGER PRIMARY KEY AUTOINCREMENT,
                        ItemGroup       TEXT,
                        Title           TEXT,
                        Location        TEXT,
                        Summary         TEXT,
                        Date            DATE,
                        RangeDate       DATE,
                        RangeUsed       INT);";
        }
    }
}
