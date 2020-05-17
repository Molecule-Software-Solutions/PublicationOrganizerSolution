using Microsoft.Data.Sqlite;
using System;
using System.Collections.ObjectModel;

namespace PublicationOrganizer.Core
{
    internal class READ_PublicationsFromDatabase
    {
        /// <summary>
        /// Returns a full collection of all publications stored in the database 
        /// </summary>
        /// <returns></returns>
        public ObservableCollection<Publication> GetCollectionOfPublications()
        {
            using (SqliteConnection conn = new SqliteConnection(DBConnection.GetConnectionString()))
            {
                using (SqliteCommand comm = new SqliteCommand(GetCollectionOfPublicationsCommandText(), conn))
                {
                    ObservableCollection<Publication> returnList = new ObservableCollection<Publication>(); 
                    comm.Connection.Open(); 
                    SqliteDataReader reader = comm.ExecuteReader();
                    try
                    {
                        while (reader.Read())
                        {
                            Publication retrievedPublication = new Publication()
                            {
                                ID = reader.GetSafeInt("PublicationId"),
                                Group = reader.GetSafeString("ItemGroup"),
                                Title = reader.GetSafeString("Title"),
                                Location = reader.GetSafeString("Location"),
                                Summary = reader.GetSafeString("Summary"),
                                Date = reader.GetSafeDateTime("Date"),
                                EndOfRange = reader.GetSafeDateTime("RangeDate"),
                                RangeUsed = reader.GetSafeBool("RangeUsed")

                        };
                            returnList.Add(retrievedPublication);
                        }
                        return returnList; 
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

        /// <summary>
        /// Comamnd text for retrieving the publications from the database 
        /// </summary>
        /// <returns></returns>
        private string GetCollectionOfPublicationsCommandText()
        {
            return @"SELECT * FROM Publications;";
        }
    }
}
