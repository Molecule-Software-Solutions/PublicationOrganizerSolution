using PublicationOrganizer.Core;
using System.Windows.Controls;

namespace PublicationOrganizerUI
{
    public class BaseDialog : Page
    {
        public BaseDialog()
        {
            DataContext = StaticViewmodelController.ApplicationViewModel.StandardMessageDialogViewModel; 
        }
    }
}
