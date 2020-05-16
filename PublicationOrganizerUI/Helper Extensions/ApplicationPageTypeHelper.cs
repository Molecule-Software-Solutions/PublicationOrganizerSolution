using PublicationOrganizer.Core.Enum;
using System.Windows.Controls;

namespace PublicationOrganizerUI
{
    public static class ApplicationPageTypeHelper
    {
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
