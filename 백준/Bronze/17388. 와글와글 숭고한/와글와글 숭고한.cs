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
            if (a[0] + a[1] + a[2] >= 100)
            {
                Console.WriteLine("OK");
            }
            else
            {
                if (a[0]< a[1] && a[0] < a[2])
                {
                    Console.WriteLine("Soongsil");
                }
                if (a[1] < a[0] && a[1] < a[2])
                {
                    Console.WriteLine("Korea");
                }
                if (a[2] < a[0] && a[2] < a[1])
                {
                    Console.WriteLine("Hanyang");
                }
            }
        }
    }
}
    