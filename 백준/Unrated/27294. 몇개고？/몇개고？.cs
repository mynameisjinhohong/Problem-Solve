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
            int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            if (a[1] == 0 && (a[0] <= 16 && a[0] >= 12))
            {
                Console.WriteLine(320);
            }
            else
            {
                Console.Write(280);
            }
            
        }

    }
}
