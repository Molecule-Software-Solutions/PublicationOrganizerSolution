using PublicationOrganizer.Core;
using System.Windows.Controls;

namespace PublicationOrganizerUI
{
    public class BasePage<VM> : Page
        where VM : BaseViewModel, new()
    {
        /// <summary>
        /// Viewmodel assigned to the base page
        /// </summary>
        public VM ViewModel { get; private set; }

        public BasePage()
        {
            ViewModel = new VM();
            DataContext = ViewModel; 
        }
    }
}
