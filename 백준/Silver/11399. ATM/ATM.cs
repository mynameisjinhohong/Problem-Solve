using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Numerics;
using System.Diagnostics;
namespace TEST
{
    class Program
    {
        static void Main(string[] args)
        {
            int su = int.Parse(Console.ReadLine());
            string[] a = Console.ReadLine().Split();
            List<int> b = new List<int>();
            for(int i =0; i < su; i++)
            {
                b.Add(int.Parse(a[i]));
            }
            b.Sort();
            int dap = 0;
            for(int i=0; i < su; i++)
            {
                dap += b[i] * (su - i);
            }
            Console.WriteLine(dap);
        }
    }
}