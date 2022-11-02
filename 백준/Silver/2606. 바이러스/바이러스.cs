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
        struct Computer
        {
            public List<int> connet;
            public bool virus;
            public bool check;
        }
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            Computer[] computers = new Computer[a];
            for(int i =0;i<a; i++)
            {
                computers[i] = new Computer();
                computers[i].connet = new List<int>();
            }
            for(int i =0; i<b; i++)
            {
                string[] c = Console.ReadLine().Split();
                int d = int.Parse(c[0]);
                int e = int.Parse(c[1]);
                computers[d - 1].connet.Add(e - 1);
                computers[e - 1].connet.Add(d - 1);
            }
            Find(0,ref computers);
            int count = 0;
            for(int i =0; i < a; i++)
            {
                if(computers[i].virus == true)
                {
                    count++;
                }
            }
            Console.WriteLine(count-1);
        }
        static void Find(int idx,ref Computer[] computers)
        {
            computers[idx].virus = true;
            computers[idx].check = true;
            for (int i =0; i<computers[idx].connet.Count; i++)
            {
                if(computers[computers[idx].connet[i]].check == false)
                {
                    Find(computers[idx].connet[i], ref computers);
                }
            }
        }

    }
}