using PublicationOrganizer.Core;
using System.Windows;

namespace PublicationOrganizerUI
{
    /// <summary>
    /// Interaction logic for PDFViewerWindow.xaml
    /// </summary>
    public partial class PDFViewerWindow : Window
    {
        // Private member - Viewmodel 
        PDFViewerViewmodel ViewModel = new PDFViewerViewmodel(); 

        public PDFViewerWindow()
        {
            DataContext = ViewModel; 
            InitializeComponent();
            NavigateToSource();
        }

        /// <summary>
        /// Navigates to the PDF viewer source set in the <see cref="PDFViewerViewmodel"/>
        /// </summary>
        private void NavigateToSource()
        {
            webBrowserControl.Navigate("about:blank");
            webBrowserControl.Navigate(ViewModel.PDFPath); 
        }
    }
}
