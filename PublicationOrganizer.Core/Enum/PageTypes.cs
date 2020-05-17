namespace PublicationOrganizer.Core.Enum
{
    /// <summary>
    /// Provides a value that can be assigned to represent pages in this application's core.
    /// NOTE: A developer will need to extend these types in their UI of choice in order to actually
    /// call UI pages. 
    /// This has been accomplished in this WPF UI via the ApplicationPageTypeHelper class which extends
    /// this enum 
    /// </summary>
    public enum PageTypes
    {
        MainPage,
        AdministrationPage,
    }
}
