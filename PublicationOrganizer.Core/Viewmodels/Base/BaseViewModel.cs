using System.ComponentModel;
using System.Runtime.CompilerServices;

namespace PublicationOrganizer.Core
{
    /// <summary>
    /// Base viewmodel to be inherited by child viewmodels
    /// </summary>
    public class BaseViewModel : INotifyPropertyChanged
    {
        /// <summary>
        /// Event fired when a property in the viewmodel is updated
        /// NOTE: This is inherited by lower level viewmodels and is 
        /// handled by FODY weavers which inject code at compilation time
        /// to handle all property change events. Fody is required, otherwise
        /// a developer will need to manually call property changed events. 
        /// </summary>
        public event PropertyChangedEventHandler PropertyChanged;

        public void OnPropertyChanged([CallerMemberName]string propertyName = "")
        {
            PropertyChanged.Invoke(this, new PropertyChangedEventArgs(propertyName)); 
        }
    }
}
