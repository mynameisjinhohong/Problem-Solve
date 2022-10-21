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
            int dogamsu = int.Parse(a[0]);
            int munjaesu = int.Parse(a[1]);
            Dictionary<string, int> e = new Dictionary<string, int>();
            Dictionary<int, string> f = new Dictionary<int, string>();
            StringBuilder sb = new StringBuilder();
            for(int i =0; i<dogamsu; i++)
            {
                String g = Console.ReadLine();
                e.Add(g, i);
                f.Add(i, g);
            }
            for(int i = 0; i < munjaesu; i++)
            {
                string c = Console.ReadLine();
                int check;
                if(int.TryParse(c,out check))
                {
                    sb.AppendLine(f[check-1]);
                }
                else
                {
                    sb.AppendLine((e[c]+1).ToString());
                }
            }
            Console.WriteLine(sb);
        }
    }
}