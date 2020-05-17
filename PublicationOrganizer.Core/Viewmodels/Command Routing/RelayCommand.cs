using System;
using System.Windows.Input;

namespace PublicationOrganizer.Core
{
    /// <summary>
    /// Relay commands for WPF command routing
    /// </summary>
    public class RelayCommand : ICommand
    {
        #region Private Fields 

        // Field containing the action to be executed
        private Action _Action;

        // Field containing the CanExecute result
        private bool _CanExecute;

        #endregion

        #region Constructor

        /// <summary>
        /// Default constructor
        /// </summary>
        /// <param name="action"></param>
        /// <param name="canExecute"></param>
        public RelayCommand(Action action, bool canExecute = true)
        {
            _Action = action;
            _CanExecute = canExecute; 
        }

        #endregion

        #region Events 

        /// <summary>
        /// Event fired when the <see cref="_CanExecute"/> field is updated 
        /// </summary>
        public event EventHandler CanExecuteChanged;

        #endregion

        #region Public Methods 

        /// <summary>
        /// Method that returns the <see cref="_CanExecute"/> property value
        /// </summary>
        /// <param name="parameter"></param>
        /// <returns></returns>
        public bool CanExecute(object parameter)
        {
            return _CanExecute; 
        }

        /// <summary>
        /// Method that executes the <see cref="_Action"/> passed by the constructor
        /// Execution is dependent on the <see cref="_CanExecute"/> value
        /// </summary>
        /// <param name="parameter"></param>
        public void Execute(object parameter)
        {
            _Action(); 
        }

        #endregion 
    }
}
