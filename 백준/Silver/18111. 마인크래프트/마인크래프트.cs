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
            string[] a = Console.ReadLine().Split();
            int[,] b = new int[int.Parse(a[0]), int.Parse(a[1])];
            int top = 0;
            int down = 256;
            int tileAmount = 0;
            for (int i = 0; i < int.Parse(a[0]); ++i)
            {
                string[] c = Console.ReadLine().Split();
                for (int j = 0; j < int.Parse(a[1]); ++j)
                {
                    b[i, j] = int.Parse(c[j]);
                    tileAmount += b[i, j];
                    if (b[i, j] > top)
                    {
                        top = b[i, j];
                    }
                    if (b[i, j] < down)
                    {
                        down = b[i, j];
                    }
                }
            }
            tileAmount += int.Parse(a[2]);
            if(top > tileAmount / (int.Parse(a[0]) * int.Parse(a[1])) +1 )
            {
                top = (tileAmount / (int.Parse(a[0]) * int.Parse(a[1]))) +1;
            }
            Dictionary<int, int> dic = new Dictionary<int, int>();
            int bestTime = 2147483647;
            int doneHeight = 0;
            dic.Add(b[0, 0], 0);
            for (int i = 0; i < int.Parse(a[0]); ++i)
            {
                for (int j = 0; j < int.Parse(a[1]); ++j)
                {

                        if (!dic.ContainsKey(b[i,j]))
                        {
                            dic.Add(b[i, j], 1);
                        }
                        else
                        {
                            dic[b[i, j]] = dic[b[i, j]] + 1;
                        }
                }
            }
            //foreach (KeyValuePair<int, int> each in dic)
            //{

            //    Console.WriteLine(each.Key + " : " + each.Value);

            //}
            for (int i = down; i <= top; ++i)
            {
                int tile = int.Parse(a[2]);
                int time = 0;
                foreach (KeyValuePair<int, int> gg in dic)
                {
                    if (gg.Key > i)
                    {
                        time += (gg.Key - i) * 2 * gg.Value;
                        tile += (gg.Key - i) * gg.Value;
                    }
                    else if (gg.Key < i)
                    {
                        time += (i - gg.Key) * gg.Value;
                        tile -= (i - gg.Key) * gg.Value;
                    }
                }
                if (tile >= 0 && time <= bestTime)
                {
                    bestTime = time;
                    doneHeight = i;
                }
            }
            Console.Write(bestTime + " " + doneHeight);


        }

    }

}