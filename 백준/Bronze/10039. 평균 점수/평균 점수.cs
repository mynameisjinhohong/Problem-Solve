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
            if (a < 40)
            {
                a = 40;
            }
            int b = int.Parse(Console.ReadLine());
            if(b < 40){
                b = 40;
            }
            int c = int.Parse(Console.ReadLine());
            if (c < 40)
            {
                c = 40;
            }
            int d = int.Parse(Console.ReadLine());
            if (d < 40)
            {
                d = 40;
            }
            int e = int.Parse(Console.ReadLine());
            if (e < 40)
            {
                e = 40;
            }
            Console.WriteLine((a + b + c + d + e) / 5);
        }
        
    }

}