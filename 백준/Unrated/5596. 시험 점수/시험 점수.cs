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
            int[] b = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int dap1 = a[0] + a[1] + a[2] + a[3];
            int dap2 = b[0] + b[1] + b[2] + b[3];
            if(dap2> dap1)
            {
                Console.WriteLine(dap2);
            }
            else
            {
                Console.WriteLine(dap1);
            }
        }

        
    }
}