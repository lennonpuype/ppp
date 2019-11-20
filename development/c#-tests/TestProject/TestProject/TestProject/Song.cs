using System;
namespace TestProject
{
    public class Song
    {
        public string title;
        public string artist;
        public int duration;
        public static int songCount = 0;

        //Constructor
        public Song(string aTitle, string aArtist, int aDuration)
        {
            title = aTitle;
            artist = aArtist;
            duration = aDuration;
            songCount++;
        }

        public int getSongCount()
        {
            return songCount;
        }

        

    }
}

/*
    You can use the static class attribute in the Program.cs like this:

        Song holiday = new Song("Holiday", "Green Day", 200);
        Console.WriteLine(Song.songCount);
        Song kashmir = new Song("Kashmir", "Led Zeppelin", 150);
        Console.WriteLine(kashmir.getSongCount());
           
*/
