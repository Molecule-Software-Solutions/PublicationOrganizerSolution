using Microsoft.Data.Sqlite;
using System;

namespace PublicationOrganizer.Core
{
    class UPDATE_ExistingPublicationRecord
    {
        /// <summary>
        /// Command which edits an existing publication record via Record ID
        /// </summary>
        /// <param name="publication"></param>
        public void EditPublication(Publication publication)
        {
            using (SqliteConnection conn = new SqliteConnection(DBConnection.GetConnectionString()))
            {
                using (SqliteCommand comm = new SqliteCommand(EditPublicationCommandText(), conn))
                {
                    comm.Parameters.AddWithValue("@PublicationId", publication.ID); 
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

        /// <summary>
        /// Command text for updating a publication
        /// </summary>
        /// <returns></returns>
        private string EditPublicationCommandText()
        {
            return @"UPDATE Publications
                     SET   
                        Title = @Title, 
                        ItemGroup = @Group, 
                        Location = @Location, 
                        Summary = @Summary, 
                        Date = @Date, 
                        RangeDate = @RangeDate, 
                        RangeUsed = @RangeUsed
                     WHERE
                        PublicationId = @PublicationId;";
        }
    }
}
