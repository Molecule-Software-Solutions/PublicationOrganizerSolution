using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using PublicationOrganizer.Core; 

namespace PublicationOrganizerUI
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        ApplicationViewModel ViewModel; 
        public MainWindow()
        {
            ViewModel = StaticViewmodelController.ApplicationViewModel;
            DataContext = ViewModel; 
            InitializeComponent();
            EventSubscriber();
            SetInitialPage(); 
        }

        private void SetInitialPage()
        {
            PageContentFrame.Content = ViewModel.CurrentPage.GetApplicationPage();
        }

        private void EventSubscriber()
        {
            ViewModel.PropertyChanged += ViewModel_PropertyChanged;
        }

        private void ViewModel_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            if(e.PropertyName == nameof(ViewModel.CurrentPage))
            {
                PageContentFrame.Content = ViewModel.CurrentPage.GetApplicationPage(); 
            }
        }
    }
}
