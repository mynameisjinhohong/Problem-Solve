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
            StringBuilder sb = new StringBuilder();
            for(int i =0; i<a.Length; i++)
            {
                sb.AppendLine(i.ToString());
            }
            Console.WriteLine(sb);
        }
    }
}