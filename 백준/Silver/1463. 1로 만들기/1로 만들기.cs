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
        static Dictionary<int, int> dap = new Dictionary<int, int>();
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            Console.WriteLine(Calc(a));
        }
        static int Calc(int idx)
        {
            List<int> list = new List<int>();
            if(idx == 1)
            {
                return 0;
            }
            if(idx == 3 || idx == 2)
            {
                return 1;
            }
            if (idx % 3 == 0)
            {
                if (dap.ContainsKey(idx / 3))
                {
                    list.Add(dap[idx / 3] + 1);
                }
                else
                {
                    int a = Calc(idx / 3);
                    list.Add(a +1);
                    dap.Add(idx / 3, a);
                }
            }
            if (idx % 2 == 0)
            {
                if (dap.ContainsKey(idx / 2))
                {
                    list.Add(dap[idx / 2] + 1);
                }
                else
                {
                    int a = Calc(idx / 2);
                    list.Add(a + 1);
                    dap.Add(idx / 2, a);
                }
            }
            if (dap.ContainsKey(idx -1))
            {
                list.Add(dap[idx - 1] + 1);
            }
            else
            {
                int a = Calc(idx - 1);
                list.Add(a + 1);
                dap.Add(idx -1, a);
            }
            list.Sort();
            return list[0];
        }
    }
}