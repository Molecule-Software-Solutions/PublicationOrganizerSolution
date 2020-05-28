using PublicationOrganizer.Core;
using System.Windows.Input;

namespace PublicationOrganizerUI
{
    /// <summary>
    /// Interaction logic for MainPage.xaml
    /// </summary>
    public partial class MainPage : BasePage<MainPageViewModel>
    {
        // Default Constructor
        public MainPage()
        {
            InitializeComponent(); 
        }

        /// <summary>
        /// Executes the search command if enter is pressed in the search box instead of clicking the search button
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void SearchTextBox_KeyDown(object sender, KeyEventArgs e)
        {
            if(e.Key == Key.Enter)
            {
                ViewModel.PerformSearch_COMMAND.Execute(this);
            }
        }
    }
}
