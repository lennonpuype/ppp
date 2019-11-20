using System;

namespace TestProject
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            Chef chef = new Chef();
            chef.MakeSpecialDish();

            ItalianChef italianChef = new ItalianChef();
            italianChef.MakeSpecialDish();
        }
    }
}

/*
    Notes:
        ___:Strings
        - When using a \ you can return every character you want bu \" for example
        - .Length to get length of a string, spaces is counted when using a string
        - .ToUpper & .ToLower for upper/lowercase
        - .Contains checks if something is included a string
        - [i] gets the character in string (zero-based)
        - .IndexOf gets the index when certain value starts
        - .Substring only gives you the characters starting from the first value you give,
        the second value you say is how much characters you want to get



        ___:Numbers
        - Math.Pow() gives you the (Kwadraat - NL) of the first number made with the second number
        - Math.Sqrt() gives you the (Vierkantswortel - NL) of the number
        - Math.Max() gives you the biggest number of the 2 values
        - Math.Min() gives you the lowest number of the 2 values



        ___:User Input
        - Convert.Read gets the user input

            Console.Write("Enter your name: ");
            string name = Console.ReadLine();
            Console.Write("Enter your age: ");
            string age = Console.ReadLine();
            Console.WriteLine("Hello " + name + ", you are " + age);

            This prints "Hello Lennon, you are 21" for example



        ___:Building Calculator

            Console.Write("Enter a number: ");
            double number1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter a different number: ");
            double number2 = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine(number1 + number2);



        ___:Mad libs

            string color, pluralNoun, celebrity;
            Console.Write("Enter a color: ");
            color = Console.ReadLine();
            Console.Write("Enter a pluralNoun: ");
            pluralNoun = Console.ReadLine();
            Console.Write("Enter a celebrity: ");
            celebrity = Console.ReadLine();

            Console.WriteLine("Roses are " + color);
            Console.WriteLine(pluralNoun + " are blue");
            Console.WriteLine("I love " + celebrity);



        ___:Arrays
        - Make a Array: int[] variableName = {};
        - Access a specific index: variableName[index];

        - Different way of making Array: int[] variableName = new int[amount];
        - Give values to that Array type: variableName[index] = value;



        ___:Methods
        - Methods are the same as functions we know from JavaScript
        - Naming of a Method makes use of PascalCasing
        - Parameters works the same way as JavaScript, but you nee to enter the datatype before the parameter
        Example: public static void SayHi(string hi)

            public static void Main(string[] args)
            {
                SayHi("Lennon", 21);
                SayHi("Youri", 20);
                SayHi("Mike", 19);
            }

            public static void SayHi(string name, int age)
            {
                Console.WriteLine("Hello " + name + ", you are " + age);
            }



        ___:Return statement
        - When you want to return something don't use void but the datatype of what you'll return

            public static void Main(string[] args)
            {
                int cubedNumber = cube(5);
                Console.WriteLine(cubedNumber);
            }

            public static int cube(int number)
            {
                int result = Convert.ToInt32(Math.Pow(number, 3));
                return result;
            }



        ___:If statement
        - Same as JavaScript so I will skip this



        ___:Switch statement

            switch(index)
            {
                case 0:
                    day = "Monday";
                    break;
                case 1:
                    day = "Tuesday";
                    break;
                case 2:
                    day = "Wednesday";
                    break;
                case 3:
                    day = "Thursday";
                    break;
                case 4:
                    day = "Friday";
                    break;
                case 5:
                    day = "Saturday";
                    break;
                case 6:
                    day = "Sunday";
                    break;
                default:
                    day = "Unkown";
                    break;
            }

       ___While loop:

            while (condition)
            {
                execution until condition is false
            }



        ___Building guessing game

            string secretWord = "Lemon";
            string guess = "";
            int guessAmount = 5;
            int newGuessAmount = guessAmount;


            while (guess != secretWord && guessAmount != 0)
            {
                
                Console.Write("Enter guess: " + "(" + newGuessAmount + " left)");
                guess = Console.ReadLine();

                newGuessAmount--;
            }

            if (guessAmount <= 0)
            {
                Console.Write("You lost!");
            }
            else
            {
                int guessResult = Convert.ToInt32(guessAmount - newGuessAmount);
                string guessesAmountString;

                if (guessResult != 1)
                {
                    guessesAmountString = " guesses";
                }
                else
                {
                    guessesAmountString = " guess";
                }

                Console.Write("You win!" + "after " + guessResult + guessesAmountString);
            }



        ___:For loop

            int[] variableName = { 5, 4,1,55,45 };

            for (int i = 0; i < variableName.Length; i++)
            {
                Console.WriteLine(variableName[i]);
            }

        ___:2D Arrays
        - Make Array:
            int[,] numberGrid =
            {
                {1, 2 },
                {3, 4 },
                {5, 6 }
            };

            \-\OR\-\

            int[,] newArray = new int[2, 3]; (Row, Column)

        - Read a 2D Array: numberGrid[0,1] (First row, then column)
        - When you want multiple dimensions you need more , in the declaration



        ___:Exceptions
        - When using try - catch you can make use of Exception which gives you more information

            catch(Exception e){
                Console.Write(e.Message);
            }

        - You also have finally and that code will always be executed


        ___:Classes and Objects
        - First you call the className, then you give it a variablename and then register it as a new class with the className
            Book book1 = new Book();
            book1.title = "HP";

            Book book1 = new Book("HP", "JK. Rowling", 450);

     */
