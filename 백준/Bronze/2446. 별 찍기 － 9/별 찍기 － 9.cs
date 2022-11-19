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
            for(int i =0; i< a ; i++)
            {
                for(int j =0; j<i; j++)
                {
                    Console.Write(" ");
                }
                for(int j = 0; j<a*2 - (i*2)-1; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
            for(int i =a-1; i>0; i--)
            {
                for (int j = 0; j < i-1; j++)
                {
                    Console.Write(" ");
                }
                for (int j = 0; j < a * 2 - (i * 2) +1; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }

        }
        
    }

}