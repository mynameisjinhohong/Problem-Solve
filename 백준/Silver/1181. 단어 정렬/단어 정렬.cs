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
            int a = int.Parse(Console.ReadLine());
            List<string> lengthString = new List<string>();
            List<string> s = new List<string>();
            int best =0;
            int sameCount = 0;
            for(int i =0; i<a; i++)
            {
                string k = Console.ReadLine();
                if(lengthString.Contains(k) == false)
                {
                    lengthString.Add(k);
                    char[] b = lengthString[i-sameCount].ToCharArray();
                    if(best < b.Length)
                    {
                        best = b.Length;
                    }
                }
                else
                {
                    sameCount++;
                }
            }
            for(int i=1; i<=best; i++)
            {
                for(int j =0; j<lengthString.Count; j++)
                {
                    char[] c = lengthString[j].ToCharArray();
                    if(c.Length == i)
                    {
                        s.Add(lengthString[j]);
                    }
                }
                s.Sort();
                for(int j =0; j<s.Count; j++)
                {
                    Console.WriteLine(s[j]);
                }
                s.Clear();
            }
             
        }

    }

}