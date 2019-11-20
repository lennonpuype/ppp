using System;
namespace TestProject
{
    public class Student
    {
        public string name;
        public string major;
        public double year;

        //Constructor
        public Student(string aName, string aMajor, double aYear)
        {
            name = aName;
            major = aMajor;
            year = aYear;
        }

        public bool lastYear()
        {
            if(year == 3)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}
