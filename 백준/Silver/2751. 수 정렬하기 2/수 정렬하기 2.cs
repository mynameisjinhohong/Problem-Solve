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
            StringBuilder sb = new StringBuilder();
            int a = Convert.ToInt32(Console.ReadLine());
            List<int> b = new List<int>();
            for(int i =0; i < a; i++)
            {
                b.Add(Convert.ToInt32(Console.ReadLine()));
            }
            b.Sort();
            for(int i =0; i<a; i++)
            {
                sb.Append(b[i].ToString() + "\n");
            }
            Console.WriteLine(sb);

        }

    }
}