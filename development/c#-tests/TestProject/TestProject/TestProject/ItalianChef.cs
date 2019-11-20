using System;
namespace TestProject
{
    public class ItalianChef : Chef
    {
        public void MakePasta()
        {
            Console.Write("The Italian Chef make pasta");
        }

        public override void MakeSpecialDish()
        {
            Console.WriteLine("The chef makes pasta pesto");
        }
    }
}

/*
    The Italian Chef will be able to do what the normal Chef do because of the : in the class
    With the override keyword in the public void method from the subclass and
    from the base class you use virtual on that function that will be overwritten
*/
