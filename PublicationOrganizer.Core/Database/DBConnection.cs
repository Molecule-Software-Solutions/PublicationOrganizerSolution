using Microsoft.Data.Sqlite;

namespace PublicationOrganizer.Core
{
    /// <summary>
    /// Class that holds a static instance of the connection string
    /// NOTE: Because this application does not have a secure/password protected database, there is no need to provide a secret-keeper.
    /// It is recommended that a developer use some sort of secret keeping mechanism if securing his/her database file. 
    /// SUB-NOTE: This library does not contain a reference which allows cyphering of the database file. One can be added if necessary, but
    /// must be done prior to assigning a password. 
    /// </summary>
    internal static class DBConnection
    {
        /// <summary>
        /// Returns the constructed connection string
        /// </summary>
        /// <returns></returns>
        public static string GetConnectionString()
        {
            SqliteConnectionStringBuilder cStringBuilder = new SqliteConnectionStringBuilder()
            {
                DataSource = "PublicationData.db",
                ForeignKeys = true,
                Mode = SqliteOpenMode.ReadWriteCreate
            };
            return cStringBuilder.ConnectionString; 
        }
    }
}
