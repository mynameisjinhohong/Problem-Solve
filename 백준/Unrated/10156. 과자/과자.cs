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
            int dap = a[1] * a[0] - a[2];
            if(dap < 0)
            {
                dap = 0;
            }
            Console.WriteLine(dap);
            
        }

    }
}
