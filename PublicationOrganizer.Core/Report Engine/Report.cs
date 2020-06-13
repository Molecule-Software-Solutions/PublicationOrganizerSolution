using ReportGenerator;
using System.Collections.ObjectModel;
using System.Data;

namespace PublicationOrganizer.Core.Report_Engine
{
    internal class Report : IReport
    {
        #region Private Members 

        // Private instance of the publications collection
        private ObservableCollection<Publication> m_Publications;

        #endregion

        #region Constructor 

        public Report
            (
            string outputPath, 
            string outputFileName, 
            ObservableCollection<Publication> reportData, 
            string headerText, 
            string reportTitle, 
            bool useReportDate, 
            int[] columnsTreatedAsDates
            )
        {
            OutputPath = outputPath;
            OutputFileName = outputFileName;
            m_Publications = reportData;
            HeaderText = headerText;
            ReportTitle = reportTitle;
            UseReportDate = useReportDate;
            ColumnsToTreatAsDateTime = columnsTreatedAsDates;
            ReportData = ReturnDataTableFromPublicationsCollection(); 
        }

        #endregion

        #region Public Properties 

        public string OutputPath { get; set; }
        public string OutputFileName { get; set; }
        public DataTable ReportData { get; set; }
        public string HeaderText { get; set; }
        public string ReportTitle { get; set; }
        public bool UseReportDate { get; set; }
        public int[] ColumnsToTreatAsDateTime { get; set; }

        #endregion

        #region Private Methods 

        /// <summary>
        /// Returns a filled data table which will be used to populate the <see cref="ReportData"/> property
        /// </summary>
        /// <returns></returns>
        private DataTable ReturnDataTableFromPublicationsCollection()
        {
            DataTable dt = CreateDataTableObject();

            foreach (Publication publication in m_Publications)
            {
                dt.Rows.Add
                    (
                    publication.Title,
                    publication.Group,
                    publication.Location,
                    publication.Date,
                    publication.EndOfRange,
                    publication.Summary
                    ); 
            }

            return dt; 
        }

        /// <summary>
        /// Constructs a new data table along with relevant columns
        /// </summary>
        /// <returns></returns>
        private DataTable CreateDataTableObject()
        {
            DataTable dt = new DataTable();

            dt.Columns.Add(new DataColumn("Title"));
            dt.Columns.Add(new DataColumn("Group"));
            dt.Columns.Add(new DataColumn("Location"));
            dt.Columns.Add(new DataColumn("Date of Publication"));
            dt.Columns.Add(new DataColumn("End of Date Range"));
            dt.Columns.Add(new DataColumn("Summary"));

            return dt; 
        }

        #endregion 
    }
}

