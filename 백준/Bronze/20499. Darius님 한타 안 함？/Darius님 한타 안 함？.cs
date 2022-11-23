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
            string[] a = Console.ReadLine().Split('/');
            int k = int.Parse(a[0]);
            int d = int.Parse(a[1]);
            int ass = int.Parse(a[2]);
            if(k+ass<d || d == 0)
            {
                Console.WriteLine("hasu");
            }
            else
            {
                Console.WriteLine("gosu");
            }


       
        }
        
    }

}