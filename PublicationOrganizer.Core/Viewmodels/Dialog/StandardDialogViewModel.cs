using System;

namespace PublicationOrganizer.Core
{
    public class StandardDialogViewModel
    {
        public StandardDialogViewModel(string dialogTitle, string dialogMessage)
        {
            DialogTitle = dialogTitle;
            DialogMessage = dialogMessage; 
        }

        public string DialogTitle { get; set; }
        public string DialogMessage { get; set; }
        public bool DialogResult { get; set; }

        public event EventHandler DialogClosed = (sender, e) => { };
        public event EventHandler DialogResultRendered = (sender, e) => { };

        public RelayCommand CloseDialog_COMMAND => new RelayCommand(() =>
        {
            DialogClosed.Invoke(this, EventArgs.Empty); 
        });

        public RelayCommand CloseDialogSendResult_COMMAND => new RelayCommand(() =>
        {
            DialogClosed.Invoke(this, EventArgs.Empty);
            DialogResultRendered.Invoke(this, EventArgs.Empty);
        });
    }
}
