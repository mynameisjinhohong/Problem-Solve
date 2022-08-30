using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TEST
{
    class Program
    {
        static void Main(string[] args)
        {
            while(true)
            {
                string a = Console.ReadLine();
                string[] b = a.Split();
                if(a == "0 0 0")
                {
                    break;
                }
                int a1 = int.Parse(b[0]);
                int a2 = int.Parse(b[1]);
                int a3 = int.Parse(b[2]);
                if((a1*a1) +(a2*a2) == (a3 *a3))
                {
                    Console.WriteLine("right");
                }
                else if((a1 * a1) + (a3 * a3) == (a2 * a2))
                {
                    Console.WriteLine("right");
                }
                else if ((a2 * a2) + (a3 * a3) == (a1 * a1))
                {
                    Console.WriteLine("right");
                }
                else
                {
                    Console.WriteLine("wrong");
                }
            }

             
        }

    }

}