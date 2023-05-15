using System;
using System.Numerics;
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
            int dap = 0;
            while (true)
            {
                string a = Console.ReadLine();
                if(a != "gum gum for jay jay")
                {
                    break;
                }
                dap++;
            }
            Console.WriteLine(dap);
        }
    }
}
    