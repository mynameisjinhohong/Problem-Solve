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
            for(int i = 0; i < a; i++)
            {
                for(int j =0; j< i; j++)
                {
                    Console.Write(" ");
                }
                for(int k =0; k < a - i; k++)
                {
                    Console.Write("*");
                }
                Console.WriteLine("");
            }

        }
    }
}