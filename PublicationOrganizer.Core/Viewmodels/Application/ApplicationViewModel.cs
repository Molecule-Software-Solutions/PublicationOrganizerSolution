using PublicationOrganizer.Core.Enum;
using PublicationOrganizer.Core.Migration;
using System;

namespace PublicationOrganizer.Core
{
    public class ApplicationViewModel : BaseViewModel
    {
        #region Constructor 

        /// <summary>
        /// Default constructor
        /// </summary>
        public ApplicationViewModel()
        {
            PerformApplicationMaintenanceFunctions();
        }

        #endregion

        #region Properties 

        /// <summary>
        /// The current page that the user has navigated to
        /// </summary>
        public PageTypes CurrentPage { get; set; } = PageTypes.MainPage;

        /// <summary>
        /// The viewmodel that will control standard message viewmodels
        /// </summary>
        public StandardDialogViewModel StandardMessageDialogViewModel { get; set; }

        /// <summary>
        /// Path to a generated PDF file
        /// </summary>
        public string PDFViewerFilePath { get; set; }

        #endregion

        #region Private Methods 

        /// <summary>
        /// Method that triggers database maintenance functions on startup
        /// </summary>
        private void PerformApplicationMaintenanceFunctions()
        {
            Builder bldr = new Builder();
            bldr.PerformDatabaseBuildout();
        }

        #endregion

        #region Public Methods 

        /// <summary>
        /// Method that begins page navigation
        /// </summary>
        /// <param name="page"></param>
        public void NavigateToPage(PageTypes page)
        {
            CurrentPage = page;
        }

        /// <summary>
        /// Method that creates a standard message dialog
        /// </summary>
        /// <param name="header">Title of the dialog to be shown</param>
        /// <param name="message">Message contained within the body of the dialog box</param>
        public void CreateMessageDialog(string header, string message)
        {
            StandardMessageDialogViewModel = new StandardDialogViewModel(header, message);
        }

        /// <summary>
        /// Method that calls the PDF engine window to appear 
        /// </summary>
        /// <param name="fileLocation"></param>
        public void CallPDFEngine(string fileLocation)
        {
            if(!string.IsNullOrEmpty(fileLocation))
            {
                PDFViewerFilePath = fileLocation;
                PDFViewerCalled.Invoke(this, EventArgs.Empty); 
            }
            else
            {
                CreateMessageDialog("Error opening PDF page", "The PDF page could not be opened"); 
            }
        }

        #endregion

        #region Commands 

        /// <summary>
        /// Command fired by a double left mouse click on the window chrome top border
        /// NOTE: This command notifies the subscribing main window that a double click resize request has been submitted
        /// </summary>
        public RelayCommand WindowChromeDoubleClick_COMMAND => new RelayCommand(() =>
        {
            WindowChromeDoubleClickResizeCalled.Invoke(this, EventArgs.Empty); 
        });

        #endregion

        #region Public Events 

        public event EventHandler WindowChromeDoubleClickResizeCalled = (sender, e) => { };
        public event EventHandler PDFViewerCalled = (sender, e) => { };

        #endregion 
    }
}
