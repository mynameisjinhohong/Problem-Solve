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
            StringBuilder sb = new StringBuilder();
            int[] d = new int[c+1];
            List<int> e = new List<int>();
            d[0] = 0;
            d[1] = 0;
            for(int i =2; i<=c; i++)
            {
                d[i] = i;
            }
            for(int i =2; i<=c; i++)
            {
                if(d[i] == 0) {  }
                else
                {
                    e.Add(i);
                    for (int j = i * 2; j<=c; j += i)
                    {
                        
                        d[j] = 0;
                    }
                }
            }
            for(int i =0; i<e.Count; i++)
            {
                if(e[i] >= b)
                {
                    sb.AppendLine(e[i].ToString());
                }
            }
            Console.WriteLine(sb);

        }
    }
}
