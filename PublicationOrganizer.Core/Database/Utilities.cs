using Microsoft.Data.Sqlite;
using System;

namespace PublicationOrganizer.Core.Migration
{
    internal class Utilities
    {
        /// <summary>
        /// Returns the current migration version of the database as an <see cref="int"/> value
        /// </summary>
        /// <returns></returns>
        public static int GetDatabaseVersion()
        {
            using (SqliteConnection conn = new SqliteConnection(DBConnection.GetConnectionString()))
            {
                using (SqliteCommand comm = new SqliteCommand("", conn))
                {
                    comm.CommandText = "PRAGMA user_version";
                    comm.Connection.Open(); 
                    try
                    {
                        return Convert.ToInt32(comm.ExecuteScalar());
                    }
                    catch (Exception ex)
                    {
                        throw new Exception(ex.Message); 
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
}
