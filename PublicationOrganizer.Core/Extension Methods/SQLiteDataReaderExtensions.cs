using Microsoft.Data.Sqlite;
using System;

namespace PublicationOrganizer.Core
{
    public static class SQLiteDataReaderExtensions
    {
        /// <summary>
        /// returns a safe <see cref="string"/> from an <see cref="SqliteDataReader"/>
        /// </summary>
        /// <param name="reader"></param>
        /// <param name="columnName"></param>
        /// <returns></returns>
        public static string GetSafeString(this SqliteDataReader reader, string columnName)
        {
            if (reader.GetType() != typeof(DBNull) && !string.IsNullOrEmpty(columnName))
            {
                return reader[columnName].ToString(); 
            }
            else return string.Empty; 
        }

        /// <summary>
        /// returns a safe <see cref="DateTime"/> from an <see cref="SqliteDataReader"/>
        /// </summary>
        /// <param name="reader"></param>
        /// <param name="columnName"></param>
        /// <returns></returns>
        public static DateTime GetSafeDateTime(this SqliteDataReader reader, string columnName)
        {
            if (reader.GetType() != typeof(DBNull) && !string.IsNullOrEmpty(columnName))
            {
                return DateTime.Parse(reader[columnName].ToString());
            }
            else return DateTime.Parse("1/1/0001"); 
        }

        /// <summary>
        /// returns a safe <see cref="int"/> from an <see cref="SqliteDataReader"/>
        /// </summary>
        /// <param name="reader"></param>
        /// <param name="columnName"></param>
        /// <returns></returns>
        public static int GetSafeInt(this SqliteDataReader reader, string columnName)
        {
            if (reader.GetType() != typeof(DBNull) && !string.IsNullOrEmpty(columnName))
            {
                return Convert.ToInt32(reader[columnName].ToString());
            }
            else return 0; 
        }
    }
}
