using PublicationOrganizer.Core.Enum;
using PublicationOrganizer.Core.Migration; 

namespace PublicationOrganizer.Core
{
    public class ApplicationViewModel : BaseViewModel
    {
        public ApplicationViewModel()
        {
            PerformApplicationMaintenanceFunctions(); 
        }

        /// <summary>
        /// The current page that the user has navigated to
        /// </summary>
        public PageTypes CurrentPage { get; set; } = PageTypes.MainPage; 

        /// <summary>
        /// The viewmodel that will control standard message viewmodels
        /// </summary>
        public StandardDialogViewModel StandardMessageDialogViewModel { get; set; }

        /// <summary>
        /// Method that triggers database maintenance functions on startup
        /// </summary>
        private void PerformApplicationMaintenanceFunctions()
        {
            Builder bldr = new Builder();
            bldr.PerformDatabaseBuildout();
        }

        /// <summary>
        /// Method that begins page navigation
        /// </summary>
        /// <param name="page"></param>
        public void NavigateToPage(PageTypes page)
        {
            CurrentPage = page; 
        }

        public void CreateMessageDialog(string header, string message)
        {
            StandardMessageDialogViewModel = new StandardDialogViewModel(header, message);
        }
    }
}
