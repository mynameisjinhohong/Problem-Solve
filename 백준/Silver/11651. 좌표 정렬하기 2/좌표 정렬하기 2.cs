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
            Dictionary<int, List<int>> dic = new Dictionary<int, List<int>>();
            List<int> y = new List<int>();
            StringBuilder sb = new StringBuilder();
            for(int i=0; i<a; i++)
            {
                string[] b = Console.ReadLine().Split();
                int c = int.Parse(b[0]);
                int d = int.Parse(b[1]);
                if (!y.Contains(d))
                {
                    y.Add(d);
                }
                if (dic.ContainsKey(d))
                {
                    dic[d].Add(c);
                }
                else
                {
                    dic.Add(d, new List<int>() { c });
                }
            }
            foreach (KeyValuePair<int, List<int>> key in dic) 
            {
                key.Value.Sort();
            }
            y.Sort();
            for(int i =0; i<y.Count; i++)
            {
                for(int j = 0; j < dic[y[i]].Count; j++)
                {
                    sb.AppendLine(dic[y[i]][j] + " " + y[i]);
                }
            }
            Console.WriteLine(sb);
            
        }
    }
}