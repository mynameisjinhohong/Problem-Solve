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
            int b = int.Parse(Console.ReadLine());
            if (a < 2)
            {
                Console.WriteLine("Before");
            }
            else if (a == 2)
            {
                if (b < 18)
                {
                    Console.WriteLine("Before");
                }
                else if(b == 18)
                {
                    Console.WriteLine("Special");
                }
                else
                {
                    Console.WriteLine("After");
                }
            }
            else
            {
                Console.WriteLine("After");
            }
        }

        
    }
}
    