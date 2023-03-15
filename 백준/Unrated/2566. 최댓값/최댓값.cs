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
            int max = 0;
            int x =1;
            int y = 1;
            for(int i =0; i < 9; i++)
            {
                int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                for(int j =0; j<9; j++)
                {
                    if (a[j] > max)
                    {
                        max = a[j];
                        x = j + 1;
                        y = i + 1;
                    }
                }
            }
            Console.WriteLine(max);
            Console.WriteLine(y + " " + x);
            
        }

    }
}
