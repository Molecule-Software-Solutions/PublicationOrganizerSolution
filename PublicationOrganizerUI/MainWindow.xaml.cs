using PublicationOrganizer.Core;
using PublicationOrganizerUI.Pages.Dialog;
using System;
using System.Threading.Tasks;
using System.Timers;
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
            CreateSplashDialog(); 
        }

        /// <summary>
        /// Sets the initial display page
        /// </summary>
        private void SetInitialPage()
        {
            PageContentFrame.Content = ViewModel.CurrentPage.GetApplicationPage();
        }

        /// <summary>
        /// Creates the splash dialog, sets properties, and begins timer sequence
        /// </summary>
        private void CreateSplashDialog()
        {
            SplashDialog SD = new SplashDialog();
            SD.Width = 600;
            SD.Height = 200;
            SD.HorizontalAlignment = HorizontalAlignment.Center;
            SD.VerticalAlignment = VerticalAlignment.Center;
            ContentOverlayFrame.Content = SD;
            StartSplashTimer();
        }

        /// <summary>
        /// Starts a 2 second splash screen timer
        /// </summary>
        private void StartSplashTimer()
        {
            Timer tmr = new Timer(2000);
            tmr.Start();
            tmr.Elapsed += Tmr_Elapsed;
        }

        /// <summary>
        /// Terminates the splash screen after the timer elapses
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void Tmr_Elapsed(object sender, ElapsedEventArgs e)
        {
            Application.Current.Dispatcher.Invoke(() =>
            {
                ContentOverlayFrame.Content = null;
            }); 
        }

        /// <summary>
        /// Subscribes to viewmodel events
        /// </summary>
        private void EventSubscriber()
        {
            ViewModel.PropertyChanged += ViewModel_PropertyChanged;
            ViewModel.WindowChromeDoubleClickResizeCalled += ViewModel_WindowChromeDoubleClickResizeCalled;
            ViewModel.PDFViewerCalled += ViewModel_PDFViewerCalled;
        }

        private void ViewModel_PDFViewerCalled(object sender, EventArgs e)
        {
            PDFViewerWindow viewerWindow = new PDFViewerWindow();
            viewerWindow.Show(); 
        }

        #region Event Handlers

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

        #endregion 
    }
}
