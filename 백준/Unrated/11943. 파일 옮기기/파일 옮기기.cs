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
            int dap1 = a[0] + b[1];
            int dap2 = b[0] + a[1];
            if(dap2> dap1)
            {
                Console.WriteLine(dap1);
            }
            else
            {
                Console.WriteLine(dap2);
            }
        }

        
    }
}
    