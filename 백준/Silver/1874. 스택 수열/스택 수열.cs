using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;

namespace TEST
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            StringBuilder sb = new StringBuilder();
            int ejun = 0;
            int stacksu = 1;
            bool can = true;
            Stack<int> stack = new Stack<int>();
            for(int i =0; i<a; i++)
            {
                int now = int.Parse(Console.ReadLine());
                if(now > ejun)
                {
                    for(int j=0; j < now - ejun; j++)
                    {
                        sb.AppendLine("+");
                        stack.Push(stacksu);
                        stacksu++;
                    }
                    sb.AppendLine("-");
                    stack.Pop();
                    ejun = now;
                }
                else
                {
                    if(stack.Pop() == now)
                    {
                        sb.AppendLine("-");
                    }
                    else
                    {
                        can = false;
                        break;
                    }
                }
            }
            if(can == true)
            {
                Console.WriteLine(sb);
            }
            else
            {
                Console.WriteLine("NO");
            }

        }
    }
}