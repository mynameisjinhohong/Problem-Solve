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
            char[] chars = Console.ReadLine().ToCharArray();
            int a = int.Parse(Console.ReadLine());
            for(int i =0; i<a;i++)
            {
                string[] b = Console.ReadLine().Split();
                int b1 = int.Parse(b[0]);
                int b2 = int.Parse(b[1]);
                ChangeString(ref chars, b1, b2);
            }
            for(int i =0; i<chars.Length;i++) 
            {
                Console.Write(chars[i]);
            }
        }

        static void ChangeString(ref char[] chars,int b1, int b2)
        {
            char c = chars[b1];
            char d = chars[b2];
            chars[b1] = d;
            chars[b2] = c;
        }
    }
}