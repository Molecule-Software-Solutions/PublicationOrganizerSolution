using System;

namespace PublicationOrganizer.Core
{
    public class StandardDialogViewModel
    {
        #region Constructor

        /// <summary>
        /// Default constructor
        /// </summary>
        /// <param name="dialogTitle"></param>
        /// <param name="dialogMessage"></param>
        public StandardDialogViewModel(string dialogTitle, string dialogMessage)
        {
            DialogTitle = dialogTitle;
            DialogMessage = dialogMessage; 
        }

        #endregion

        #region Properties 

        /// <summary>
        /// Property containing the title of the dialog box
        /// </summary>
        public string DialogTitle { get; set; }

        /// <summary>
        /// Property containing the message to be displayed in the body of the dialog box
        /// </summary>
        public string DialogMessage { get; set; }

        /// <summary>
        /// Property that contains the Dialog result
        /// NOTE: Currently unused as there are no confirmation dialog boxes utilized 
        /// </summary>
        public bool DialogResult { get; set; }

        #endregion

        #region Events

        /// <summary>
        /// Event triggered when dialog is closed
        /// </summary>
        public event EventHandler DialogClosed = (sender, e) => { };

        /// <summary>
        /// Event triggered when dialog is closed and a dialog result is issued
        /// NOTE: Currently unused as there are no confirmation dialog boxes utilized
        /// </summary>
        public event EventHandler DialogResultRendered = (sender, e) => { };

        #endregion 

        #region Commands

        /// <summary>
        /// Command that closes the dialog box
        /// </summary>
        public RelayCommand CloseDialog_COMMAND => new RelayCommand(() =>
        {
            DialogClosed.Invoke(this, EventArgs.Empty); 
        });

        /// <summary>
        /// Command that closes the dialog box and notifies the UI or Core that a result was reached 
        /// </summary>
        public RelayCommand CloseDialogSendResult_COMMAND => new RelayCommand(() =>
        {
            DialogClosed.Invoke(this, EventArgs.Empty);
            DialogResultRendered.Invoke(this, EventArgs.Empty);
        });

        #endregion 
    }
}
