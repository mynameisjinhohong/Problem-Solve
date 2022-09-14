using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;

namespace TEST
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            Dictionary<int, List<int>> z = new Dictionary<int, List<int>>();
            StringBuilder sb = new StringBuilder();
            for(int i = 0; i<a; i++)
            {
                string[] b = Console.ReadLine().Split();
                int x = int.Parse(b[0]);
                int y = int.Parse(b[1]);
                if (z.ContainsKey(x))
                {
                    z[x].Add(y);
                }
                else
                {
                    z.Add(x, new List<int>() { y });
                }
            }
            z = z.OrderBy(x => x.Key).ToDictionary(x => x.Key, x => x.Value);
            foreach(KeyValuePair<int,List<int>> k in z)
            {
                k.Value.Sort();
                foreach(int l in k.Value)
                {
                    sb.Append(k.Key + " " + l + "\n");
                }
            }
            Console.WriteLine(sb);
        }

    }


}