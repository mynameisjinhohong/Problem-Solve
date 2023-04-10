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
            StringBuilder sb = new StringBuilder();
            while (true)
            {
                string a = Console.ReadLine();
                if(a == "END")
                {
                    break;
                }
                for(int i =0; i<a.Length; i++)
                {
                    sb.Append(a[a.Length - 1 - i]);
                }
                sb.AppendLine();
            }
            Console.WriteLine(sb);
        }

        
    }
}
    