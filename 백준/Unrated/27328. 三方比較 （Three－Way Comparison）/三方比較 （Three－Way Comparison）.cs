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
            if (a > b)
            {
                Console.WriteLine(1);
            }
            else if(a == b)
            {
                Console.WriteLine(0);
            }
            else
            {
                Console.WriteLine(-1);
            }
        }

    }
}
