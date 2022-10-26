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
            Stack<int> stack = new Stack<int>();
            for(int i = 0; i < b; i++)
            {
                int d = int.Parse(Console.ReadLine());
                if(d <= c)
                {
                    stack.Push(d);
                }
            }
            int count = 0;
            while (true)
            {
                int need = stack.Pop();
                count += c/need;
                c = c % need;
                if (c == 0)
                {
                    break;
                }
            }
            Console.WriteLine(count);

            
        }
    }
}