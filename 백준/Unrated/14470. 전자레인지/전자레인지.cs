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
            int dap = 0;
            if(a < 0)
            {
                dap += Math.Abs(a) * c;
                dap += d;
                dap += e * b;
            }
            else
            {
                dap += (b - a) * e;
            }
            Console.WriteLine(dap);


        }


    }
}
    