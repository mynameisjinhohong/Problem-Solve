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
            while(true)
            {
                string a = Console.ReadLine();
                if(a == "#")
                {
                    break;
                }
                else
                {
                    int dap = 0;
                    for(int i =0; i<a.Length; i++)
                    {
                        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
                        {
                            dap++;
                        }
                    }
                    Console.WriteLine(dap);
                }
            }
        }

    }
}
