namespace PublicationOrganizer.Core
{
    /// <summary>
    /// Creates a static instance of the viewmodels listed within
    /// NOTE: Static instances of viewmodels should be used carefully, and only when absolutely necessary. 
    /// </summary>
    public static class StaticViewmodelController
    {
        /// <summary>
        /// Application viewmodel - Holds persistent state because the items required within it will be 
        /// needed across the application lifetime. 
        /// </summary>
        public static ApplicationViewModel ApplicationViewModel { get; set; } = new ApplicationViewModel();
    }
}
