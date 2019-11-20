using System;
namespace TestProject
{
    public class Book
    {
        public string title;
        public string author;
        public int pages;

        //Constructor
        public Book(string aTitle, string aAuthor, int aPages)
        {
            title = aTitle;
            author =  aAuthor;
            pages = aPages;

            Console.WriteLine(title + " by " + author + " has " + pages + " pages");
        }

    }
}
