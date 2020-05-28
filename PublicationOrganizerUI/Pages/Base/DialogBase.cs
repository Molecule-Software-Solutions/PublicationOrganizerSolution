using PublicationOrganizer.Core;
using System.Windows.Controls;

namespace PublicationOrganizerUI
{
    public class DialogBase : Page
    {
        StandardDialogViewModel ViewModel;

        public DialogBase(StandardDialogViewModel viewModel = null)
        {
            if(viewModel == null)
            {
                ViewModel = StaticViewmodelController.ApplicationViewModel.StandardMessageDialogViewModel;
            }
            else
            {
                ViewModel = viewModel; 
            }

            DataContext = ViewModel; 
        }
    }
}
