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
            if (a < 1000)
            {
                if(a % 10 == 0)
                {
                    Console.WriteLine(a / 100 + 10);
                }
                else
                {
                    Console.WriteLine((a / 10) + (a % 10));
                }
            }
            else
            {
                Console.WriteLine(20);
            }
            
        }
    }
}
    