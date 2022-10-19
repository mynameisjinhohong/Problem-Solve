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
            BigInteger c = Factorial(a);
            char[] b = c.ToString().ToCharArray();
            int count = 0;
            for(int i = 0; i < b.Length; i++)
            {
                if(b[b.Length-1 -i] == '0')
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            Console.WriteLine(count);
        }
        static BigInteger Factorial(int x)
        {
            BigInteger dap = 1;
            for(int i=0; i<x; i++)
            {
                dap *= i + 1;
            }
            return dap;
        }
    }
}