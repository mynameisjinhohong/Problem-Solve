using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Algorithm
{

    internal class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int b = a % 8;
            if(b == 1)
            {
                Console.WriteLine(1);
            }
            else if(b == 2 || b == 0)
            {
                Console.WriteLine(2);
            }
            else if(b == 3 || b == 7)
            {
                Console.WriteLine(3);
            }
            else if(b == 4 || b == 6)
            {
                Console.WriteLine(4);
            }
            else if(b == 5)
            {
                Console.WriteLine(5);
            }
        }
    }
}
    