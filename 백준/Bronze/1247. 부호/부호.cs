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
            int first = int.Parse(Console.ReadLine());
            BigInteger hap = 0;
            for(int i =0;i<first; i++)
            {
                BigInteger a = BigInteger.Parse(Console.ReadLine());
                hap += a;
            }
            if(hap == 0)
            {
                Console.WriteLine(0);
            }
            else if(hap > 0)
            {
                Console.WriteLine("+");
            }
            else
            {
                Console.WriteLine("-");
            }
            int second = int.Parse(Console.ReadLine());
            hap = 0;
            for (int i = 0; i < second; i++)
            {
                BigInteger a = BigInteger.Parse(Console.ReadLine());
                hap += a;
            }
            if (hap == 0)
            {
                Console.WriteLine(0);
            }
            else if (hap > 0)
            {
                Console.WriteLine("+");
            }
            else
            {
                Console.WriteLine("-");
            }
            int third = int.Parse(Console.ReadLine());
            hap = 0;
            for (int i = 0; i < third; i++)
            {
                BigInteger a = BigInteger.Parse(Console.ReadLine());
                hap += a;
            }
            if (hap == 0)
            {
                Console.WriteLine(0);
            }
            else if (hap > 0)
            {
                Console.WriteLine("+");
            }
            else
            {
                Console.WriteLine("-");
            }
        }

    }

}