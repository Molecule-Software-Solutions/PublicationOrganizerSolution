using PublicationOrganizer.Core;
using System;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Input;

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
            ViewModel.WindowChromeDoubleClickResizeCalled += ViewModel_WindowChromeDoubleClickResizeCalled;
        }

        private void ViewModel_WindowChromeDoubleClickResizeCalled(object sender, EventArgs e)
        {
            if(WindowState == WindowState.Maximized)
            {
                WindowState = WindowState.Normal; 
            }
            else
            {
                WindowState = WindowState.Maximized; 
            }
        }

        private void ViewModel_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            if(e.PropertyName == nameof(ViewModel.CurrentPage))
            {
                PageContentFrame.Content = ViewModel.CurrentPage.GetApplicationPage(); 
            }
            if(e.PropertyName == nameof(ViewModel.StandardMessageDialogViewModel))
            {
                DialogContentFrame.Content = new StandardMessageDialog();
                ViewModel.StandardMessageDialogViewModel.DialogClosed += StandardMessageDialogViewModel_DialogClosed;
            }
        }

        private void StandardMessageDialogViewModel_DialogClosed(object sender, EventArgs e)
        {
            DialogContentFrame.Content = null; 
        }

        private async void WindowControlsContainer_MouseDown(object sender, MouseButtonEventArgs e)
        {
            if(WindowState == WindowState.Maximized)
            {
                await Task.Delay(200);
                WindowState = WindowState.Normal;
                if(Mouse.PrimaryDevice.LeftButton == MouseButtonState.Pressed)
                {
                    DragMove(); 
                }
            }
            else
            {
                DragMove(); 
            }
        }

        private void Minimize_BTN_Click(object sender, RoutedEventArgs e)
        {
            this.WindowState = WindowState.Minimized; 
        }

        private void Maximize_BTN_Click(object sender, RoutedEventArgs e)
        {
            if(WindowState == WindowState.Maximized)
            {
                WindowState = WindowState.Normal; 
            }
            else
            {
                WindowState = WindowState.Maximized;
            }
        }

        private void Close_BTN_Click(object sender, RoutedEventArgs e)
        {
            Application.Current.Shutdown(); 
        }
    }
}
