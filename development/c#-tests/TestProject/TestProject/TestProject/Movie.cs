using System;
namespace TestProject
{
    public class Movie
    {
        private string title;
        private string director;
        private string rating;

        //Constructor
        public Movie(string aTitle, string aDirector, string aRating)
        {
            title = aTitle;
            director = aDirector;
            Rating = aRating;
        }

        //Getter & Setter (Kind of Filter system)
        public string Rating
        {
            get { return rating; }
            set {
                if(value == "G" || value == "PG" || value == "PG-13" || value == "R" || value == "NR")
                {
                    rating = value;
                }
                else
                {
                    rating = "NR";
                }
            }
        }

    }
}
