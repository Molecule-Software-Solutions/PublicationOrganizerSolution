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

        private void PerformApplicationMaintenanceFunctions()
        {
            Builder bldr = new Builder();
            bldr.PerformDatabaseBuildout();
        }

        public void NavigateToPage(PageTypes page)
        {
            CurrentPage = page; 
        }
    }
}
