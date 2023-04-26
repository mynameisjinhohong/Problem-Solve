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
            int dap1 = (a[2] / a[3])  *(a[1] / a[3]);
            if(dap1 > a[0])
            {
                Console.WriteLine(a[0]);
            }
            else
            {
                Console.WriteLine(dap1);
            }
            
        }
    }
}
    