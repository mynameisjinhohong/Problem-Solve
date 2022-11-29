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
            BigInteger b = BigInteger.Parse(a[0]);
            BigInteger c = BigInteger.Parse(a[1]);
            if (c > b)
            {
                Console.Write((c - b + 1) * (c + b) / 2);
            }
            else if(b>c)
            {
                Console.Write((b -c + 1) * (c + b) / 2);
            }
            else
            {
                Console.Write(b);
            }

        }

    }

}