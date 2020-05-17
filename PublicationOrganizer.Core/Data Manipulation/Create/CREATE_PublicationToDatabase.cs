using Microsoft.Data.Sqlite;
using System;

namespace PublicationOrganizer.Core
{
    class CREATE_PublicationToDatabase
    {

        /// <summary>
        /// Adds a new publication record into the database 
        /// </summary>
        /// <param name="publication"></param>
        public void AddPublication(Publication publication)
        {
            using (SqliteConnection conn = new SqliteConnection(DBConnection.GetConnectionString()))
            {
                using (SqliteCommand comm = new SqliteCommand(AddPublicationCommandText(), conn))
                {
                    comm.Parameters.AddWithValue("@Title", publication.Title);
                    comm.Parameters.AddWithValue("@Group", publication.Group);
                    comm.Parameters.AddWithValue("@Location", publication.Location);
                    comm.Parameters.AddWithValue("@Summary", publication.Summary);
                    comm.Parameters.AddWithValue("@Date", publication.Date);
                    if(publication.RangeUsed)
                    {
                        comm.Parameters.AddWithValue("@RangeDate", publication.EndOfRange);
                    }
                    else
                    {
                        comm.Parameters.AddWithValue("@RangeDate", publication.Date);
                    }
                    comm.Parameters.AddWithValue("@RangeUsed", publication.RangeUsed);
                    comm.Connection.Open(); 
                    try
                    {
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


        private string AddPublicationCommandText()
        {
            return @"INSERT INTO Publications (
                        Title,
                        ItemGroup,
                        Location,
                        Summary,
                        Date,
                        RangeDate,
                        RangeUsed )
                    VALUES (
                        @Title,
                        @Group,
                        @Location,
                        @Summary,
                        @Date, 
                        @RangeDate,
                        @RangeUsed);";
        }
    }
}
