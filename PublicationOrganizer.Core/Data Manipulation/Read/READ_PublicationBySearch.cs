using Microsoft.Data.Sqlite;
using System;
using System.Collections.ObjectModel;

namespace PublicationOrganizer.Core
{
    internal class READ_PublicationBySearch
    {
        #region Constructor

        /// <summary>
        /// Default constructor
        /// </summary>
        /// <param name="searchType"></param>
        /// <param name="searchString"></param>
        public READ_PublicationBySearch(SearchTypes searchType, string searchString)
        {
            SearchType = searchType;
            SearchString = searchString; 
        }

        #endregion

        #region Properties 

        public SearchTypes SearchType { get; private set; }
        public string SearchString { get; private set; }

        #endregion

        #region Public Methods 

        /// <summary>
        /// Returns an <see cref="ObservableCollection{T}"/> of <see cref="Publication"/> based upon the <see cref="SearchType"/> and <see cref="SearchString"/> provided
        /// </summary>
        /// <returns></returns>
        public ObservableCollection<Publication> GetPublicationsBySearch()
        {
            if(string.IsNullOrEmpty(SearchString))
            {
                StaticViewmodelController.ApplicationViewModel.CreateMessageDialog("No Search Entered", "You must enter text into the search box to continue. Please try again");
                return new ObservableCollection<Publication>(); 
            }

            using (SqliteConnection conn = new SqliteConnection(DBConnection.GetConnectionString()))
            {
                using (SqliteCommand comm = new SqliteCommand(GetPublicationsBySearchCommandText(), conn))
                {
                    // Note the addition of wild-card % in this parameter
                    if(SearchType == SearchTypes.Date)
                    {
                        throw new Exception("Date search attempted. This operation is not supported");
                    }
                    else
                    {
                        comm.Parameters.AddWithValue("@Search", $"%{SearchString}%");
                    }
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

        #endregion

        #region Private Methods 

        /// <summary>
        /// Returns command text for searching publications based upon the provided <see cref="SearchType"/>
        /// </summary>
        /// <returns></returns>
        private string GetPublicationsBySearchCommandText()
        {
            if(SearchType == SearchTypes.Date)
            {
                return string.Empty; 
            }
            else
            {
                return $"SELECT * FROM Publications WHERE {SearchType.GetColumnIDBySearchType()} LIKE @Search;";
            }
        }

        #endregion 
    }
}
