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
            int a = int.Parse(Console.ReadLine());
            int[] b = new int[a];
            for(int i =0; i<a; i++)
            {
                b[i] = int.Parse(Console.ReadLine());
            }
            int[] best = new int[a];
            if (a == 1)
            {
                Console.WriteLine(b[0]);
                return;
            }
            else if (a == 2)
            {
                Console.WriteLine(b[0] + b[1]);
                return;
            }
            best[0] = b[0];
            best[1] = b[0] + b[1];
            best[2] = Math.Max(b[0] + b[2], b[1] + b[2]);
            for(int i =3; i<a; i++)
            {
                best[i] = Math.Max(best[i-3]+b[i-1] + b[i],b[i] +best[i-2]);
            }
            Console.WriteLine(best[a-1]);
            
        }
    }
}