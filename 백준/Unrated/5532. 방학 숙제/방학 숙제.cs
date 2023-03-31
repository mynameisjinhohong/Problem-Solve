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
            int dap1 = 0;
            int dap2 = 0;
            if(b % d == 0)
            {
                dap1 = b / d;
            }
            else
            {
                dap1 = (b / d) + 1;
            }
            if (c % e == 0)
            {
                dap2 =  c / e;
            }
            else
            {
                dap2 = c / e + 1;
            }
            if(dap1 > dap2)
            {
                Console.WriteLine(a - dap1);
            }
            else
            {
                Console.WriteLine(a - dap2);
            }
        }

    }
}
