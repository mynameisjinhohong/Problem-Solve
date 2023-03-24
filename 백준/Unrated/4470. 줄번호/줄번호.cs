using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Algorithm
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            string[] st = new string[a];
            for(int i =0; i<a; i++)
            {
                string b = Console.ReadLine();
                string c = (i + 1).ToString() + ". ";
                st[i] = c + b;
            }
            for(int i =0; i<a; i++)
            {
                Console.WriteLine(st[i]);
            }
        }

    }
}
