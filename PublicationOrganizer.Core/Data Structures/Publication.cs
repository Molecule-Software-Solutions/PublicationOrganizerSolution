using System;
using System.ComponentModel;

namespace PublicationOrganizer.Core
{
    public class Publication : INotifyPropertyChanged
    {
        #region Properties 

        // Note: Properties define the values required of every publication

        public int ID { get; set; }
        public string Group { get; set; }
        public string Title { get; set; }
        public string Location { get; set; }
        public string Summary { get; set; }
        public DateTime Date { get; set; } = DateTime.Today;
        public DateTime EndOfRange { get; set; } = DateTime.Today; 
        public bool RangeUsed { get; set; }

        #endregion

        #region Public override methods

        /// <summary>
        /// Override <see cref="ToString"/> method to return title of publication 
        /// </summary>
        /// <returns></returns>
        public override string ToString()
        {
            return Title; 
        }

        #endregion

        #region Events

        /// <summary>
        /// Fired when property changed is executed. 
        /// All handled by FODY weaver engine
        /// </summary>
        public event PropertyChangedEventHandler PropertyChanged;

        #endregion 

    }
}
