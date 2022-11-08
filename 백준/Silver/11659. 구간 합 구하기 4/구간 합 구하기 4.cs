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
            string[] a = Console.ReadLine().Split();
            int b = int.Parse(a[0]);
            int c = int.Parse(a[1]);
            string[] d = Console.ReadLine().Split();
            int[] su = new int[d.Length+1];
            int nujuk = 0;
            for(int i=0; i< d.Length+1; i++)
            {
                su[i] = nujuk;
                if(i< d.Length)
                {
                    nujuk += int.Parse(d[i]);
                }
            }
            StringBuilder sb = new StringBuilder();
            for(int i =0; i<c; i++)
            {
                string[] e = Console.ReadLine().Split();
                int first = int.Parse(e[0]);
                int end = int.Parse(e[1]);
                sb.AppendLine((su[end] - su[first - 1]).ToString());
            }
            Console.WriteLine(sb);
        }
    }
}