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
        static BigInteger Factorial(int num)
        {
            BigInteger dap = 1;
            for (int i = num; i > 0; i--)
            {
                dap *= i;
            }
            return dap;
        }
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int twogesu = a / 2;
            BigInteger dap = 0;
            for (int i = 0; i <= twogesu; i++)
            {
                int onegesu = a - (i * 2);
                dap += (Factorial(onegesu + i) / (Factorial(onegesu) * Factorial(i)));
                dap %= 10007;
            }
            Console.WriteLine(dap);

        }
    }

}