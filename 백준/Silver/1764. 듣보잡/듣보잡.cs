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
            int d = int.Parse(a[0]);
            int b = int.Parse(a[1]);
            Dictionary<string, int> db = new Dictionary<string, int>();
            List<string> k = new List<string>();
            for (int i = 0; i < d; i++)
            {
                db.Add(Console.ReadLine(), i);
            }
            for(int i = 0; i < b; i++)
            {
                string de = Console.ReadLine();
                if(db.ContainsKey(de))
                {
                    k.Add(de);
                }
            }
            k.Sort();
            Console.WriteLine(k.Count);
            foreach(string key in k)
            {
                Console.WriteLine(key);
            }
        }
    }
}