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
            string[] a = Console.ReadLine().Split();
            int su = int.Parse(a[0]);
            int need = int.Parse(a[1]);
            List<int> lineList = new List<int>();
            int best = 0;
            for (int i = 0; i < su; i++)
            {
                int b = int.Parse(Console.ReadLine());
                if (b > best)
                {
                    best = b;
                }
                lineList.Add(b);
            }
            int ejun = 0;
            int ehu = best;
            while (true)
            {
                if(need == 1)
                {
                    Console.WriteLine(best);
                    break;
                }
                int gizun = (int)Math.Round(((double)ejun + (double)ehu) / (double)2,MidpointRounding.AwayFromZero);
                int hap = 0;
                for (int i = 0; i < su; i++)
                {
                    hap += lineList[i] / gizun;
                }
                if (hap >= need)
                {
                    ejun = gizun;
                }
                else if (hap <= need)
                {
                    ehu = gizun;
                }
                if ((ehu - ejun) < 2)
                {
                    hap = 0;
                    for (int i = 0; i < su; i++)
                    {
                        hap += lineList[i] / ehu;
                    }
                    if(hap == need)
                    {
                        Console.WriteLine(ehu);
                        break;
                    }
                    else
                    {
                        Console.WriteLine(ejun);
                        break;
                    }
                    
                }
            }
        }
    }
}