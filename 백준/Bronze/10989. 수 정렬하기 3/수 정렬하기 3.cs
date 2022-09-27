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
            StreamReader sr = new StreamReader(Console.OpenStandardInput());
            StreamWriter sw = new StreamWriter(Console.OpenStandardOutput());
            int a = int.Parse(sr.ReadLine());
            int[] b = new int[10000];
            for (int i = 0; i < a; i++)
            {
                b[int.Parse(sr.ReadLine())-1] += 1;
            }
            for (int i = 0; i < 10000; i++)
            {
                for (int j = 0; j < b[i]; j++)
                {
                    sw.WriteLine(i+1);
                }

            }
            sr.Close();
            sw.Close();

        }
    }
}