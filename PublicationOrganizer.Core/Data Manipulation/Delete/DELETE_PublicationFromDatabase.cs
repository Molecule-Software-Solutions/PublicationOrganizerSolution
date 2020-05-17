using Microsoft.Data.Sqlite;
using System;

namespace PublicationOrganizer.Core
{
    class DELETE_PublicationFromDatabase
    {
        /// <summary>
        /// Method which deletes a publication from the database 
        /// </summary>
        /// <param name="recordID">Record ID of the publication to delete</param>
        public void PerformDelete(int recordID)
        {
            using (SqliteConnection conn = new SqliteConnection(DBConnection.GetConnectionString()))
            {
                using (SqliteCommand comm = new SqliteCommand(PerformDeleteCommandText(), conn))
                {
                    comm.Parameters.AddWithValue("@ID", recordID);
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
        /// Command text for deleting a publication from the database 
        /// </summary>
        /// <returns></returns>
        private string PerformDeleteCommandText()
        {
            return @"DELETE FROM Publications WHERE PublicationId = @ID;";
        }
    }
}
