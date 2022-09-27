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
            BigInteger a = BigInteger.Parse(Console.ReadLine());
            BigInteger b = BigInteger.Parse(Console.ReadLine());
            Console.WriteLine(a + b);
            Console.WriteLine(a - b);
            Console.WriteLine(a * b);
        }
    }
}