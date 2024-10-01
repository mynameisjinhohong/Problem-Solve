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
        static int Zdef(int n,int x, int y)
        {
            int dap = 0;
            //Console.WriteLine("n : " + n + " x : " + x + "  y : " + y);
            if (n == 1 && x == 0 && y ==0)
            {
                return 0;
            }
            else if(n == 1 && x == 1 && y == 0)
            {
                return 1;
            }
            else if(n == 1 && x == 0 && y == 1)
            {
                return 2;
            }
            else if(n == 1 && x == 1 && y == 1)
            {
                return 3;
            }
            int su =(int)Math.Pow(2, n-1);
            if(x < su && y<su)
            {
                dap += Zdef(n - 1, x, y);
            }
            else if(x>=su && y < su)
            {
                dap += su * su;
                dap += Zdef(n - 1, x - su, y);
            }
            else if(x < su && y >= su)
            {
                dap += 2 * su * su;
                dap += Zdef(n - 1, x, y - su);
            }
            else
            {
                dap += 3 * su * su;
                dap += Zdef(n - 1, x- su, y - su);
            }
            
            return dap;
        }

        static void Main(string[] args)
        {
            int[] a = Array.ConvertAll(Console.ReadLine().Split(),int.Parse);
            Console.WriteLine(Zdef(a[0], a[2], a[1]));
        }
    }
}
