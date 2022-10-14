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
            string[] a = Console.ReadLine().Split();
            int end = int.Parse(a[1]);
            string[] b = Console.ReadLine().Split();
            Dictionary<int, int> dic = new Dictionary<int, int>();
            for (int i = 0; i < b.Length; i++)
            {
                int e = int.Parse(b[i]);
                if (dic.ContainsKey(e))
                {
                    dic[e]++;
                }
                else
                {
                    dic.Add(e, 1);
                }
            }
            dic = dic.OrderByDescending(x => x.Key).ToDictionary(x => x.Key, x => x.Value);
            int ejun = 0;
            int nujuk = 0;
            int nujuksu = 0;
            bool ed = false;
            foreach (KeyValuePair<int, int> va in dic)
            {
                if (ejun == 0)
                {
                    ejun = va.Key;
                    nujuksu += va.Value;
                }
                else
                {
                    if (((ejun - va.Key) * (nujuksu)) + nujuk > end)
                    {
                        int answer = (int)Math.Ceiling((decimal)(end - nujuk) / (decimal)(nujuksu));
                        Console.WriteLine(ejun - answer);
                        ed = true;
                        break;
                    }
                    else if (((ejun - va.Key) * (nujuksu)) + nujuk == end)
                    {
                        Console.WriteLine(va.Key);
                        ed = true;
                        break;
                    }
                    else
                    {
                        nujuk += (ejun - va.Key) * (nujuksu);
                        nujuksu += va.Value;
                        ejun = va.Key;
                    }
                }
            }
            if(ed == false)
            {
                int answer = (int)Math.Ceiling((decimal)(end - nujuk) / (decimal)(nujuksu));
                Console.WriteLine(ejun - answer);
            }
        }
    }
}
