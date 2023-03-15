using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Numerics;
using System.Diagnostics;
using System.Collections.Specialized;

namespace TEST
{
    class Program
    {

        static void Main(string[] args)
        {
            int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            if(a[0] - a[1] -a[2] >= a[1])
            {
                Console.WriteLine((decimal)(a[0] - a[1]) / (decimal)(a[0]) / (decimal)(a[0] - a[1] - a[2]) * (decimal)(a[1]));
            }
            else
            {
                Console.WriteLine(((decimal)(a[0] - a[1]) / (decimal)(a[0])) + ((decimal)(a[1]) / (decimal)(a[0]) * (decimal)(a[1] - a[0] + a[1] + a[2]) / (decimal)(a[1])));
            }
        }
    }
}