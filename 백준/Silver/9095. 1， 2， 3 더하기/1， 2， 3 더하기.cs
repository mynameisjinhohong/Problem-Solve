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
            for(int i =0; i<a; i++)
            {
                int b = int.Parse(Console.ReadLine());
                Console.WriteLine(Calc123(b));
            }
            
        }
        static int Calc123(int su)
        {
            int dap = 0;
            //int su1 = 0;
            int su2 = 0;
            int su3 = 0;
            su3 = su / 3;
            su2 = (su - (su3 * 3)) / 2;
            //su1 = su - su3 - su2;
            for(int i =su3; i>-1; i--)
            {
                //Console.WriteLine(HowMuch(1, 0, 1));
                for(int j = su2; j>0; j--)
                {
                    dap += HowMuch(su - (su3 * 3) - (su2 * 2), su2, su3);
                    su2--;
                }
                dap += HowMuch(su - (su3 * 3), 0, i);
                su3--;
                su2 = (su - (su3 * 3)) / 2;
            }
            return dap;
        }
        static int HowMuch(int Num1, int Num2, int Num3)
        {
            int dap = 0;
            dap = Factorial(Num1 + Num2 + Num3) / (Factorial(Num1) * Factorial(Num2) * Factorial(Num3));
            //Console.WriteLine("HowMuchDap : " + Factorial(Num1 + Num2 + Num3) + "Hey2 " + (Factorial(Num1) + Factorial(Num2) + Factorial(Num3)));
            return dap;
        }
        static int Factorial(int num)
        {
            int dap = 1;
            for(int i = num; i>0; i--)
            {
                dap *= i;
            }
            return dap;
        }

    }
}