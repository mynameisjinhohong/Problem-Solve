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
                if(int.Parse(a) == 0)
                {
                    break;
                }
                char[] b = a.ToCharArray();
                for(int i =0; i<b.Length; i++)
                {
                    if(b[i] != b[b.Length - i -1])
                    {
                        Console.WriteLine("no");
                        break;
                    }
                    if(i == b.Length - 1)
                    {
                        Console.WriteLine("yes");
                    }
                }
            }

             
        }

    }

}