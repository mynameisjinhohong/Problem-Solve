using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;
using System.Threading.Tasks;

namespace Algorithm
{

    internal class Program
    {
        static void Main(string[] args)
        {
            decimal[] a = Array.ConvertAll(Console.ReadLine().Split(),decimal.Parse);
            decimal M = (a[1] - a[0]) / 400;
            decimal dap = 1 / (decimal)(1 + (Math.Pow(10,(double)M)));
            Console.WriteLine(dap);
        }
    }
}
    