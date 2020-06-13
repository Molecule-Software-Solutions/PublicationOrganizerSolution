using PublicationOrganizer.Core.Report_Engine;
using ReportGenerator;
using System.Collections.ObjectModel;
using System.Text;
using System; 

namespace PublicationOrganizer.Core
{
    internal static class PublicationReportEngine
    {
        public static string GenerateReport(ObservableCollection<Publication> reportData)
        {
            try
            {
                string path = System.IO.Path.GetTempPath();
                string file = "rpt.pdf";
                int[] dateColumns = new int[2] { 3, 4 };
                ReportEngineLogic rel = new ReportEngineLogic(new Report(path, file, reportData, GenerateReportHeader(), "Report of Filtered Publications", true, dateColumns));
                return rel.CreateDocument();
            }
            catch (Exception ex)
            {
                StaticViewmodelController.ApplicationViewModel.CreateMessageDialog("PDF Generator Error", ex.Message);
                return string.Empty; 
            }
        }

        private static string GenerateReportHeader()
        {
            StringBuilder sb = new StringBuilder();
            sb.AppendLine("Publication Organizer");
            sb.AppendLine("Molecule Software Company");
            sb.AppendLine("Report of Publications");
            return sb.ToString(); 
        }
    }
}
