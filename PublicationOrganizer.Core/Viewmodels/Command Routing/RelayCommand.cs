using System;
using System.Windows.Input;

namespace PublicationOrganizer.Core
{
    /// <summary>
    /// Relay commands for WPF
    /// </summary>
    public class RelayCommand : ICommand
    {
        private Action _Action;
        private bool _CanExecute; 
        public event EventHandler CanExecuteChanged;

        public RelayCommand(Action action, bool canExecute = true)
        {
            _Action = action;
            _CanExecute = canExecute; 
        }

        public bool CanExecute(object parameter)
        {
            return _CanExecute; 
        }

        public void Execute(object parameter)
        {
            _Action(); 
        }
    }
}
