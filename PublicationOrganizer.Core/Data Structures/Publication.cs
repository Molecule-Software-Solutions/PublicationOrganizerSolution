using System;

namespace PublicationOrganizer.Core
{
    public class Publication
    {
        public int ID { get; set; }
        public string Group { get; set; }
        public string Title { get; set; }
        public string Location { get; set; }
        public string Summary { get; set; }
        public DateTime Date { get; set; }
        public DateTime EndOfRange { get; set; }
        public bool RangeUsed { get; set; }

        public override string ToString()
        {
            return Title; 
        }
    }
}
