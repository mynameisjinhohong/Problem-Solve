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
            string[] b = Console.ReadLine().Split();
            int[] d = new int[a];
            List<int> c = new List<int>();
            int max = 0;
            for(int i =0; i < a; i++)
            {
                d[i] = int.Parse(b[i]);
                if(max < d[i])
                {
                    max = d[i];
                }
            }
            for (int i =2; i<=max; i++)
            {
                bool yak = false;
                foreach(int j in c)
                {
                    if(i%j == 0)
                    {
                        yak = true;
                        break;
                    }

                }
                if(yak == false)
                {
                    c.Add(i);
                }
            }
            int count = 0;
            foreach(int i in c)
            {
                for(int j = 0; j<d.Length; j++)
                {
                    if(i == d[j])
                    {
                        count++;
                    }
                }
            }
            Console.WriteLine(count);

        }

    }

}