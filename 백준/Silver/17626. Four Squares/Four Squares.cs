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
            List<int> ints = new List<int>();
            Dictionary<int,int> dic = new Dictionary<int, int>();
            for (int i = 1; i * i <= a; i++)
            {
                ints.Add(i * i);
            }
            Console.WriteLine(What(a,ref ints,ref dic));
        }
        static int What(int su , ref List<int> ints, ref Dictionary<int,int> dic)
        {
            if (dic.ContainsKey(su))
            {
                return dic[su];
            }
            int dap = int.MaxValue;
            //int max = 0;
            //for(int i = 0; i<ints.Count; i++)
            //{
            //    if(su < ints[i])
            //    {
            //        max = i;
            //        break;
            //    }
            //    if(i == ints.Count - 1)
            //    {
            //        max = ints.Count;
            //    }
            //}
            for(int i = 1; i<=ints.Count; i++)
            {
                int a = ints.Count - i;
                if (ints[a] >su)
                {
                    continue;
                }
                //if (ints[a] < su / 2)
                //{
                //    break;
                //}
                if (ints[a] == su)
                {
                    return 1;
                }
                int hap = What(su - ints[a],ref ints,ref dic);
                if (dap > hap)
                {
                    dap = hap;
                }
                
            }
            dic.Add(su, dap + 1);
            return dap + 1;
        }

    }

}