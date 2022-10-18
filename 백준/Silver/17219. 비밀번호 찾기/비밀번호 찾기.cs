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
            int b = int.Parse(a[0]);
            int c = int.Parse(a[1]);
            Dictionary<string, string> id = new Dictionary<string, string>();
            StringBuilder sb = new StringBuilder();
            for(int i =0; i < b; i++)
            {
                string[] d = Console.ReadLine().Split();
                id.Add(d[0], d[1]);
            }
            for(int i =0; i< c; i++)
            {
                string e = Console.ReadLine();
                sb.AppendLine(id[e]);
            }
            Console.WriteLine(sb);
        }
    }
}