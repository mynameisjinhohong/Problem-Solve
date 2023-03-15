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
        class Tomato
        {
            public int good;
            public List<int> neigh = new List<int>();
            public int day = 0;
            public bool done = false;
            //public int CheckEnd()
            //{
            //    for(int i =0; i<neigh.Count; i++)
            //    {
            //        if(tomatoes[neigh[i]].good == 0 || tomatoes[neigh[i]].good == 1)
            //        {
            //            return 0;
            //        }
            //    }
            //    return -1;
            //}
            public void GoTo()
            {
                if(done == false)
                {
                    for (int i = 0; i < neigh.Count; i++)
                    {
                        if (tomatoes[neigh[i]].good == 0)
                        {
                            tomatoes[neigh[i]].good = 1;
                            tomatoes[neigh[i]].day = day + 1;
                            checkit.Enqueue(neigh[i]);
                            check++;
                            check2--;
                        }
                    }
                    done = true;
                    check3++;
                }
            }
        }
        static int check = 0;
        static int check2 = 0;
        static int check3 = 0;
        static List<Tomato> tomatoes = new List<Tomato>();
        static Queue<int> checkit = new Queue<int>();
        static void Main(string[] args)
        {
            
            string[] a = Console.ReadLine().Split();
            int x = int.Parse(a[0]);
            int y = int.Parse(a[1]);
            for(int i =0; i<y; i++)
            {
                string[] b = Console.ReadLine().Split();
                for (int j = 0; j < x; j++)
                {
                    int to = int.Parse(b[j]);
                    if(to == 1)
                    {
                        checkit.Enqueue((i * x) + j);
                        check++;
                    }
                    else if(to == 0)
                    {
                        check2++;
                    }
                    Tomato toto = new Tomato();
                    toto.good = to;
                    toto.day = 0;
                    if (i > 0)
                    {
                        if (j > 0)
                        {
                            tomatoes[(i * x) + j-1].neigh.Add((i * x) + j);
                            toto.neigh.Add((i * x) + j - 1);
                            tomatoes[((i-1) * x) + j].neigh.Add((i * x) + j);
                            toto.neigh.Add(((i - 1) * x) + j);
                        }
                        else
                        {
                            tomatoes[((i - 1) * x) + j].neigh.Add((i * x) + j);
                            toto.neigh.Add(((i - 1) * x) + j);
                        }
                    }
                    else
                    {
                        if (j > 0)
                        {
                            tomatoes[(i * x) + j-1].neigh.Add((i * x) + j);
                            toto.neigh.Add((i * x) + j - 1);
                        }
                        else
                        {
                            
                        }
                    }
                    tomatoes.Add(toto);
                }
            }
            bool end = false;
            int dap = 0;
            while (!end)
            {
                if ((check == check3 && dap != 0) || check == 0)
                {
                    end = true;
                    dap = -1;
                }
                if (check2 == 0)
                {
                    end = true;
                }
                if (end == false)
                {
                    dap++;
                }
                int gogo = checkit.Count;
                for (int i = 0; i < gogo; i++)
                {
                    int ha = checkit.Dequeue();
                    if(tomatoes[ha].good == 1 && tomatoes[ha].day == dap-1)
                    {
                        tomatoes[ha].GoTo();
                    }
                    //if(tomatoes[ha].good == 0)
                    //{
                    //    if (tomatoes[ha].CheckEnd() == -1)
                    //    {
                    //        end = true;
                    //        dap = -1;
                    //        break;
                    //    }
                    //}
                }
                //for(int i =0; i<tomatoes.Count; i++)
                //{
                //    if (tomatoes[i].good == 1)
                //    {
                //        check++;
                //    }
                //    if (tomatoes[i].good == -1)
                //    {
                //        check2++;
                //    }
                //    if(tomatoes[i].done == true)
                //    {
                //        check3++;
                //    }
                //}


            }
            Console.WriteLine(dap);
        }
    }
}
