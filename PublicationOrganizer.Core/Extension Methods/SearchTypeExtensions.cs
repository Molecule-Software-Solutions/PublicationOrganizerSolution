namespace PublicationOrganizer.Core
{
    /// <summary>
    /// Returns a friendly string that describes a search type
    /// NOTE: To be used in combo-box or dropdown lists, etc. 
    /// </summary>
    public static class SearchTypeExtensions
    {
        /// <summary>
        /// Returns a <see cref="SearchTypes"/> based on an <see cref="int"/> value
        /// </summary>
        /// <param name="searchType"></param>
        /// <returns></returns>
        public static SearchTypes GetSearchTypeByInteger(this int searchType)
        {
            switch (searchType)
            {
                case 0:
                    return SearchTypes.Title;
                case 1:
                    return SearchTypes.Group;
                case 2:
                    return SearchTypes.Location;
                case 3:
                    return SearchTypes.Date;
                case 4:
                    return SearchTypes.Summary; 
                default:
                    return SearchTypes.Title;
            }
        }

        /// <summary>
        /// Returns an integer value based on the selected <see cref="SearchTypes"/>
        /// </summary>
        /// <param name="searchType"></param>
        /// <returns></returns>
        public static int GetIntBySearchType(this SearchTypes searchType)
        {
            switch (searchType)
            {
                case SearchTypes.Title:
                    return 0;
                case SearchTypes.Group:
                    return 1;
                case SearchTypes.Location:
                    return 2;
                case SearchTypes.Date:
                    return 3;
                case SearchTypes.Summary:
                    return 4;
                default:
                    return 0; 
            }
        }
    }
}
