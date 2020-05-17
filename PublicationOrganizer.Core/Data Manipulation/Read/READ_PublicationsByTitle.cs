using Microsoft.Data.Sqlite;
using System;
using System.Collections.ObjectModel;

namespace PublicationOrganizer.Core
{
    class READ_PublicationsByTitle
    {
        /// <summary>
        /// Method that performs a search on the title of all publications, and returns records that have a matching statement
        /// </summary>
        /// <param name="searchString"></param>
        /// <returns></returns>
        public ObservableCollection<Publication> GetCollectionOfPublications(string searchString)
        {
            using (SqliteConnection conn = new SqliteConnection(DBConnection.GetConnectionString()))
            {
                using (SqliteCommand comm = new SqliteCommand(SelectByTitleCommandText(), conn))
                {
                    comm.Parameters.AddWithValue("@Search", $"%{searchString}%");
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


        private string SelectByTitleCommandText()
        {
            return @"SELECT * FROM Publications WHERE Title LIKE @Search;";
        }
    }
}
