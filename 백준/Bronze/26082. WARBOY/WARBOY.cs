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
            int[] a = Array.ConvertAll(Console.ReadLine().Split(),int.Parse);
            int one = a[1] / a[0];
            Console.WriteLine(one * 3 * a[2]);
        }
    }
}
    