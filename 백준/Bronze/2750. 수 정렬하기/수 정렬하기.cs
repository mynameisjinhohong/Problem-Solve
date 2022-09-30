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
            List<int> b = new List<int>();
            for(int i =0;i<a; i++)
            {
                b.Add(int.Parse(Console.ReadLine()));
            }
            b.Sort();
            for(int i =0; i<a; i++)
            {
                Console.WriteLine(b[i]);
            }
            
        }
    }
}