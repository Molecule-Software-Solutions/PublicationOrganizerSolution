namespace PublicationOrganizer.Core
{
    public class PDFViewerViewmodel : BaseViewModel
    {
        public PDFViewerViewmodel()
        {
            PDFPath = StaticViewmodelController.ApplicationViewModel.PDFViewerFilePath;
        }
        public string PDFPath { get; set; } = string.Empty; 
    }
}
