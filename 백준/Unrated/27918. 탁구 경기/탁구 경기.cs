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
            int one = 0;
            int two = 0;
            for(int i = 0; i<a; i++)
            {
                string b = Console.ReadLine();
                if(b == "D")
                {
                    one++;
                }
                else
                {
                    two++;
                }
                if(Math.Abs(one-two) > 1)
                {
                    break;
                }
            }
            Console.WriteLine(one + ":" + two);
        }

    }
}
