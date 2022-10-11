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
            for(int i =0; i<a; i++)
            {
                string[] b = Console.ReadLine().Split();
                int c = int.Parse(b[0]);
                int d = int.Parse(b[1]);
                answer(c, d);
            }

        }
        static void answer(int gasu , int bun)
        {
            List<KeyValuePair<int,int>> l = new List<KeyValuePair<int,int>>();
            string[] a = Console.ReadLine().Split();
            int count = 0;
            int best = 0;
            int bestcount = 0;
            for(int i =0; i<a.Length; i++)
            {
                if(int.Parse(a[i]) > best)
                {
                    best = int.Parse(a[i]);
                    bestcount = 1;
                }
                else if(best == int.Parse(a[i]))
                {
                    bestcount++;
                }
                l.Add(new KeyValuePair<int, int>(i,int.Parse(a[i])));
            }
            while(true)
            {
                if(l[0].Value == best && l[0].Key == bun)
                {
                    count++;
                    Console.WriteLine(count);
                    break;
                }
                else if (l[0].Value == best)
                {
                    count++;
                    bestcount--;
                    l.RemoveAt(0);
                }
                else
                {
                    l.Add(l[0]);
                    l.RemoveAt(0);
                }
                if(bestcount == 0)
                {
                    best = 0;
                    for (int i = 0; i < l.Count; i++)
                    {
                        if (l[i].Value > best)
                        {
                            best = l[i].Value;
                            bestcount = 1;
                        }
                        else if (best == l[i].Value)
                        {
                            bestcount++;
                        }
                    }
                }
            }
        }
    }
}