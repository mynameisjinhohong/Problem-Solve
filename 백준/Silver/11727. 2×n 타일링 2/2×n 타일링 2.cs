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
            int[] b = new int[1000];
            b[0] = 1;
            b[1] = 3;
            for(int i =2; i<a; i++)
            {
                b[i] = ((b[i - 1]%10007) + ((b[i - 2] * 2)%10007)%10007);
            }
            Console.WriteLine(b[a-1]%10007);
        }
        
    }

}