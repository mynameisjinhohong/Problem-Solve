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
            int a =int.Parse(Console.ReadLine());
            int su = 0;
            for(int i =1; i<a+1; i++)
            {
                int x = i;
                int y = 0;
                int z = 0;
                for(int j =1; j < a - x+1; j++)
                {
                    y = j;
                    z = a - x - y;
                    if (z > y + 1 && x != 0 && y != 0 && z != 0 && x % 2 == 0)
                    {
                        su++;
                    }
                }

            }
            Console.WriteLine(su);
        }
    }
}