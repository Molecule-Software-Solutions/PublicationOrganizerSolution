using PublicationOrganizer.Core.Enum;
using PublicationOrganizer.Core.Migration; 

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

        #endregion 
    }
}
