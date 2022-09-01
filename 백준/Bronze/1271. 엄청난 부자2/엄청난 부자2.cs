using System;
using System.Numerics;

namespace TEST
{
    class Program
    {
        static void Main(string[] args)
        {
            String[] a = Console.ReadLine().Split();
            BigInteger A = BigInteger.Parse(a[0]);
            BigInteger B = BigInteger.Parse(a[1]);
            Console.WriteLine(A / B);
            Console.WriteLine(A % B);


        }

    }

}