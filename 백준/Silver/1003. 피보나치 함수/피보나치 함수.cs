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
            for(int i =0; i < a; i++)
            {
                int dap1 = 0;
                int dap2 = 1;
                int b = int.Parse(Console.ReadLine());
                if(b == 0)
                {
                    Console.WriteLine("1 0");
                }
                else
                {
                    Console.WriteLine(Fiboancci0(b) + " " + Fiboancci1(b));
                }
            }
        }
        static int Fiboancci0(int n)
        {
            int ejun = 0;
            int now = 1;
            if(n == 2 || n==0)
            {
                return 1;
            }
            else if (n == 1)
            {
                return 0;
            }
            for(int i = 2; i < n; i++)
            {
                int x = now;
                now += ejun;
                ejun = x;
            }
            return now;
        }
        static int Fiboancci1(int n)
        {
            int ejun = 1;
            int now = 1;
            if (n == 1 || n == 2)
            {
                return 1;
            }
            else if (n == 0)
            {
                return 0;
            }
            for (int i = 2; i < n; i++)
            {
                int x = now;
                now += ejun;
                ejun = x;
            }
            return now;
        }
    }
}