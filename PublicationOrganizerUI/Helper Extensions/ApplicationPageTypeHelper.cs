using PublicationOrganizer.Core.Enum;
using System.Windows.Controls;

namespace PublicationOrganizerUI
{
    public static class ApplicationPageTypeHelper
    {
        /// <summary>
        /// Returns a UI page based on the <see cref="PageTypes"/> enum value passed into a viewmodel
        /// </summary>
        /// <param name="page"></param>
        /// <returns></returns>
        public static Page GetApplicationPage(this PageTypes page)
        {
            switch (page)
            {
                case PageTypes.MainPage:
                    return new MainPage(); 
                case PageTypes.AdministrationPage:
                    return new Page(); 
                default:
                    return new Page(); 
            }
        }
    }
}
