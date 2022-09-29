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
            string a = Console.ReadLine();
            char[] b = a.ToCharArray();
            List<int> c = new List<int>();
            for(int i =0; i<b.Length; i++)
            {
                c.Add(b[i] - '0');
            }
            c.Sort();
            c.Reverse();
            for(int i =0; i<c.Count; i++)
            {
                Console.Write(c[i]);
            }

        }
    }
}