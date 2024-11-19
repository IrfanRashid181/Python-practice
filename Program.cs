
using System;
using static System.Net.Mime.MediaTypeNames;
class Program
{
  
    public void fun1(int x)
    {
      /*  Console.WriteLine("Enter the value of x");
        x = Convert.ToInt32(Console.ReadLine()); */
        Console.WriteLine($"x is {x}");
    }
    public void fun1()
    {
        Console.WriteLine("x is : 4");
    }

    public void fun1(int x,float y)
    {
        /*Console.WriteLine("Enter value of x and y");
        x = Convert.ToInt32(Console.ReadLine());
        y = Convert.ToInt32(Console.ReadLine());*/

        Console.WriteLine("Value of x is : "+x +"Value of y is :"+y);
    }

    public static void Main(string[] args)
    {
        Program  test1 =  new Program();
        test1.fun1();
        test1.fun1(23);
        test1.fun1(21,21.3f);

        Console.ReadLine();

    }
}
//class Program1
//{
    
//}