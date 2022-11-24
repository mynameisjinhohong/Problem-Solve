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
            int a = 0;
            int hap = 0; ;
            while(a != -1)
            {
                hap += a;
                a = int.Parse(Console.ReadLine());
            }
            Console.WriteLine(hap);

       
        }
        
    }

}