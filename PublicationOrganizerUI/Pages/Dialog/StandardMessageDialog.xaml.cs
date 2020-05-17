using PublicationOrganizer.Core;
using System.Windows.Controls;

namespace PublicationOrganizerUI
{
    /// <summary>
    /// Interaction logic for StandardMessageDialog.xaml
    /// </summary>
    public partial class StandardMessageDialog : Page
    {
        StandardDialogViewModel ViewModel; 
        public StandardMessageDialog(object viewModel)
        {
            ViewModel = viewModel as StandardDialogViewModel;
            DataContext = ViewModel; 
            InitializeComponent();
        }
    }
}
