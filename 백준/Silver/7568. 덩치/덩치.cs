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
            List<Dung> dungs = new List<Dung>();
            for(int i = 0; i < a; i++)
            {
                Dung dung = new Dung();
                string[] b = Console.ReadLine().Split();
                int weight = int.Parse(b[0]);
                int height = int.Parse(b[1]);
                dung.weight = weight;
                dung.height = height;
                dung.idx = i;
                dung.score = 1;
                dungs.Add(dung);
            }
            dungs = dungs.OrderByDescending(x=>x.weight).ToList();
            int sc = 1;
            dungs[0].score = 1;
            for(int i =0; i < dungs.Count; i++)
            {
                for(int j =0; j<dungs.Count; j++)
                {
                    if(dungs[i].weight < dungs[j].weight && dungs[i].height < dungs[j].height)
                    {
                        dungs[i].score++;
                    }
                }

                //int he = dungs[i].height;
                
                //    if (i < dungs.Count - 1)
                //    {
                //    if (dungs[i].weight > dungs[i + 1].weight)
                //    {
                //        if (he <= dungs[i + 1].height)
                //        {
                //            dungs[i + 1].score = sc;

                //        }
                //        else
                //        {
                //            sc = i + 2;
                //            dungs[i + 1].score = sc;
                //        }
                //    }
                //    else
                //    {
                //        dungs[i + 1].score = sc;
                //    }
                //}
            }
            dungs = dungs.OrderBy(x => x.idx).ToList();
            for(int i = 0; i < dungs.Count; i++)
            {
                Console.Write(dungs[i].score + " ");
            }
        }
    }
    public class Dung
    {
        public int weight;
        public int height;
        public int idx;
        public int score;
    }
}