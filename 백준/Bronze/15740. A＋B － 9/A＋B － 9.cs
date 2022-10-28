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
            string[] c = Console.ReadLine().Split();
            BigInteger a = BigInteger.Parse(c[0]);
            BigInteger b = BigInteger.Parse(c[1]);
            Console.WriteLine(a + b);
        }
    }
}