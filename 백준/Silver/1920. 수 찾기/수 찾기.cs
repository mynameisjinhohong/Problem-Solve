using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;

namespace TEST
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int[] b = new int[a];
            StringBuilder sb = new StringBuilder();
            string[] c = Console.ReadLine().Split();
            for(int i =0; i<c.Length; i++)
            {
                b[i] = int.Parse(c[i]);
            }
            int d = int.Parse(Console.ReadLine());
            string[] e = Console.ReadLine().Split();
            for(int i =0; i<e.Length; i++)
            {
                if (b.Contains<int>(int.Parse(e[i])))
                {
                    sb.Append("1\n");
                }
                else
                {
                    sb.Append("0\n");
                }
            }
            Console.WriteLine(sb);

        }

    }


}