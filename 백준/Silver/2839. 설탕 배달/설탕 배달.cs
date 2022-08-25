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
            int n =  int.Parse(Console.ReadLine());
            int a = n / 5;
            bool find = false;
            if(n%15 == 0 && n>5)
            {
                Console.WriteLine(n / 5);
            }
            else
            {
                for (int i = a; i >= 0; --i)
                {
                    if ((n - (5 * i)) % 3 == 0)
                    {
                        Console.WriteLine(i + ((n - (5 * i)) / 3));
                        find = true;
                        break;
                    }
                }
                if (find == false)
                {
                    Console.WriteLine("-1");
                }
            }
            
        }
    }
}