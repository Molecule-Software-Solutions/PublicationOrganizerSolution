using Microsoft.Data.Sqlite;
using System;

namespace PublicationOrganizer.Core
{
    /// <summary>
    /// Extensions that provide a safe return method for <see cref="SqliteDataReader"/> calls
    /// NOTE: These method will return default values if the reader recovers garbage data or null columns.
    /// The developer will want to adjust his/her return calls to provide a value that will not be mistaken
    /// for good data. Because of the simplicity of this application, generic returns are all that is required. 
    /// </summary>
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

        /// <summary>
        /// returns a safe <see cref="bool"/> from an <see cref="SqliteDataReader"/>
        /// </summary>
        /// <param name="reader"></param>
        /// <param name="columnName"></param>
        /// <returns></returns>
        public static bool GetSafeBool(this SqliteDataReader reader, string columnName)
        {
            if (reader.GetType() != typeof(DBNull) && !string.IsNullOrEmpty(columnName))
            {
                return Convert.ToBoolean(reader[columnName]);
            }
            else return false; 
        }
    }
}
