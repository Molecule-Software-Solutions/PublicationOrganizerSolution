using System;
using System.Globalization;
using System.Windows;
using System.Windows.Data;

namespace PublicationOrganizerUI
{
    public class PanelVisibilityFromBooleanConverter : IValueConverter
    {
        /// <summary>
        /// Converts a <see cref="bool"/> value to a <see cref="Visibility"/> enum
        /// </summary>
        /// <param name="value"></param>
        /// <param name="targetType"></param>
        /// <param name="parameter"></param>
        /// <param name="culture"></param>
        /// <returns></returns>
        public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (value.GetType() == typeof(bool))
            {
                switch (value)
                {
                    case true:
                        return Visibility.Visible;
                    case false:
                        return Visibility.Hidden;
                    default:
                        return Visibility.Hidden; 
                }
            }
            else return Visibility.Hidden; 
        }

        /// <summary>
        /// converts a <see cref="Visibility"/> value back to boolean 
        /// </summary>
        /// <param name="value"></param>
        /// <param name="targetType"></param>
        /// <param name="parameter"></param>
        /// <param name="culture"></param>
        /// <returns></returns>
        public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (value.GetType() == typeof(Visibility))
            {
                switch (value)
                {
                    case Visibility.Visible:
                        return true;
                    case Visibility.Hidden:
                        return false;
                    default:
                        return false;
                }
            }
            else return false; 
        }
    }
}
