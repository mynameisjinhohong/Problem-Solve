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
            string a = Console.ReadLine();
            if(a == "NLCS")
            {
                Console.WriteLine("North London Collegiate School");
            }
            else if (a == "BHA")
            {
                Console.WriteLine("Branksome Hall Asia");
            }
            else if(a == "KIS")
            {
                Console.WriteLine("Korea International School");
            }
            else if(a == "SJA")
            {
                Console.WriteLine("St. Johnsbury Academy");
            }
        }

    }
}
