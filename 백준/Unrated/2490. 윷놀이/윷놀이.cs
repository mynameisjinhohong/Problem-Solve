using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Algorithm
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int[] b = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int[] c = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            Console.WriteLine(Yut(a));
            Console.WriteLine(Yut(b));
            Console.WriteLine(Yut(c));
        }

        static string Yut(int[] a)
        {
            int b = 0;
            for(int i =0; i < a.Length; i++)
            {
                if(a[i] == 0)
                {
                    b++;
                }
            }
            if(b== 0)
            {
                return "E";
            }
            else if(b == 1)
            {
                return "A";
            }
            else if(b == 2)
            { 
                return "B";
            }
            else if(b == 3)
            {
                return "C";
            }
            else
            {
                return "D";
            }
        }
    }
}
