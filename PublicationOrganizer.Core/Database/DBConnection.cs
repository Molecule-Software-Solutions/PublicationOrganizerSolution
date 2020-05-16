using Microsoft.Data.Sqlite;

namespace PublicationOrganizer.Core
{
    /// <summary>
    /// Class that holds a static instance of the connection string
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
