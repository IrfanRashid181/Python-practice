using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassandObjects1
{
    internal class Program
    {
        class Car
        {
            public int id;
            public string name;
            public void Drive()

            {
                Console.WriteLine($"{id} car is {name}");
            }
                }
        static void Main(string[] args)
        {
              Car car = new Car();
            car.id = 112;
            car.name  = "Test";
            car.Drive();

        }
    }
}
