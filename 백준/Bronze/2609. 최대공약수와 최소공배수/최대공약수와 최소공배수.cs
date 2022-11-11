using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
namespace TEST
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] a = Console.ReadLine().Split();
            int a0 = int.Parse(a[0]);
            int a1 = int.Parse(a[1]);
            int b = 1;
            List<int> small = new List<int>();
            if(a1 < a0)
            {
                for(int i =2; i <= a0; i++)
                {
                    if(a0%i == 0 && a1%i == 0)
                    {
                        small.Add(i);
                        a0 = a0 / (i);
                        a1 = a1 / (i);
                        i = 1;
                    }
                }
            }
            else
            {
                for (int i = 2; i <= a1; i++)
                {
                    if (a0 % i == 0 && a1 % i == 0)
                    {
                        small.Add(i);
                        a0 = a0 / (i);
                        a1 = a1 / (i);
                        i = 1;
                    }
                }
            }
            foreach(int val in small)
            {
                b = b * val;
            }
            
            
            Console.WriteLine(b);
            Console.WriteLine(b * a0 * a1);
            
        }
    }
}