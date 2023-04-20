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
            int c = int.Parse(Console.ReadLine());
            int d = int.Parse(Console.ReadLine());
            int e = int.Parse(Console.ReadLine());
            int f = int.Parse(Console.ReadLine());
            int dap1 = a + b + c + d - MostSmall(a, b, c, d);
            int dap2 = Math.Max(e, f);
            Console.WriteLine(dap1 + dap2);
        }
        static int MostSmall(int a,int b, int c,int d)
        {
            int one = Math.Min(a, b);
            int two = Math.Min(c, d);
            return Math.Min(one, two);
        }



    }
}
    