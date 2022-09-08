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
            int a = int.Parse(Console.ReadLine());

            int b = a.ToString().Length;

            int c = a;

            List<int> list = new List<int>();

            while (a < c + (b * 9))
            {

                c -= 1;
                b = c.ToString().Length;
                char[] d = c.ToString().ToCharArray();

                int e = 0;

                for (int i = 0; i < d.Length; i++)
                {
                    e += d[i] - '0';
                }
                //Console.WriteLine(c + " " + e + " " + (c + e));
                if (a == (c + e))
                {
                    list.Add(c);

                }

            }
            if(list.Count >= 1)
            {
                Console.WriteLine(list[list.Count - 1]);
            }
            else
            {
                Console.WriteLine(0);
            }

        }

    }

}