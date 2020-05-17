namespace PublicationOrganizer.Core
{
    /// <summary>
    /// Returns a friendly string that describes a search type
    /// NOTE: To be used in combo-box or dropdown lists, etc. 
    /// </summary>
    public static class SearchTypeExtensions
    {
        public static string GetSearchTypeString(this SearchTypes type)
        {
            switch (type)
            {
                case SearchTypes.Title:
                    return "TITLE";
                case SearchTypes.Group:
                    return "GROUP"; 
                case SearchTypes.Location:
                    return "LOCATION";
                case SearchTypes.Summary:
                    return "SUMMARY";
                case SearchTypes.Date:
                    return "DATE";
                default:
                    return string.Empty; 
            }
        }
    }
}
