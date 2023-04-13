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
            for(int i =0;i<a.Length; i++)
            {
                if (a[i] == b[0])
                {
                    Console.WriteLine(i+1);
                    break;
                }
                if(i == a.Length - 1)
                {
                    Console.WriteLine(0);
                }
            }


        }


    }
}
    