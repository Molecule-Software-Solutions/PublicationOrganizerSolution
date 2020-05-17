namespace PublicationOrganizer.Core
{
    /// <summary>
    /// Creates a static instance of the viewmodels listed within
    /// </summary>
    public static class StaticViewmodelController
    {
        public static ApplicationViewModel ApplicationViewModel { get; set; } = new ApplicationViewModel();
    }
}
