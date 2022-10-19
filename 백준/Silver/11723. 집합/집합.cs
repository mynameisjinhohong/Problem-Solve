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
            bool[] b = new bool[20];
            StringBuilder sb = new StringBuilder();
            for (int i =0; i<a; i++)
            {
                string[] c = Console.ReadLine().Split();
                switch (c[0])
                {
                    case "add":
                        int d = int.Parse(c[1]);
                        if (b[d-1])
                        {

                        }
                        else
                        {
                            b[d-1] = true;
                        }
                        break;
                    case "remove":
                        int e = int.Parse(c[1]);
                        if (b[e-1])
                        {
                            b[e-1] = false;
                        }
                        break;
                    case "check":
                        
                        
                        int f = int.Parse(c[1]);
                        if (b[f-1])
                        {
                            sb.AppendLine("1");
                        }
                        else
                        {
                            sb.AppendLine("0");
                        }
                        break;
                    case "toggle":
                        int g = int.Parse(c[1]);
                        if (b[g-1])
                        {
                            b[g-1] = false;
                        }
                        else
                        {
                            b[g - 1] = true;
                        }
                        break;
                    case "all":
                        b = Enumerable.Repeat(true, 20).ToArray();
                        break;
                    case "empty":
                        b = Enumerable.Repeat(false, 20).ToArray();
                        break;
                }

            }
            Console.WriteLine(sb);
            
        }
    }
}