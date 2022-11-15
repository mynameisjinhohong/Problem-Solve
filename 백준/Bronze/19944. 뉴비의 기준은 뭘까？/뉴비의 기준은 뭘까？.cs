using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Numerics;
using System.Diagnostics;
namespace TEST
{

    class Program
    {
        static void Main(string[] args)
        {
            string[] a = Console.ReadLine().Split();
            int b = int.Parse(a[0]);
            int c = int.Parse(a[1]);
            if (c<3)
            {
                Console.Write("NEWBIE!");
            }
            else if (b >= c)
            {
                Console.Write("OLDBIE!");
            }
            else if (b < c)
            {
                Console.Write("TLE!");
            }

        }
        
    }

}