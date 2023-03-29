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
            int[] a = Array.ConvertAll(Console.ReadLine().Split(),int.Parse);
            Console.WriteLine((((a[0]+1)* (a[1]+1)) / (a[2]+1))-1);
            
        }

    }
}
