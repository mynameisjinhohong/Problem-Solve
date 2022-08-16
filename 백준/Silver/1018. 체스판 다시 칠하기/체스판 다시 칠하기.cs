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
            int[,] b = new int[int.Parse(a[1]), int.Parse(a[0])];
            for(int i =0; i<int.Parse(a[0]); i++)
            {
                char[] c = Console.ReadLine().ToCharArray();
                for(int j =0; j<int.Parse(a[1]); j++)
                {
                    if (c[j].Equals('W'))
                    {
                        b[j, i] = 0;
                    }
                    else if (c[j].Equals('B'))
                    {
                        b[j, i] = 1;
                    }
                }
            }
            int[,] d = new int[8, 8];
            int e = 0, f = 64;
            for (int i = 0; i < (int.Parse(a[1]) - 7); i++)
            {
                for (int u = 0; u < (int.Parse(a[0]) - 7); u++)
                {

                    for (int j = 0; j < 8; j++)
                    {
                        for (int k = 0; k < 8; k++)
                        {
                            d[k, j] = b[i + k, u + j];
                        }
                    }
                    //for (int j = 0; j < 8; j++)
                    //{
                    //    for (int k = 0; k < 8; k++)
                    //    {
                    //        Console.Write(d[k, j]);
                    //    }
                    //    Console.WriteLine("");
                    //}
                    for (int j = 0; j < 8; j++)
                    {
                        for (int k = 0; k < 8; k++)
                        {
                            //짝짝 - 1 , 홀짝 - 0 , 짝홀 - 0, 홀홀 - 1
                            if (j % 2 == 0)
                            {
                                if (k % 2 == 0)
                                {
                                    if (d[k, j] == 0)
                                    {
                                        e++;
                                    }
                                }
                                else if (k % 2 == 1)
                                {
                                    if (d[k, j] == 1)
                                    {
                                        e++;
                                    }
                                }
                            }
                            else if (j % 2 == 1)
                            {
                                if (k % 2 == 0)
                                {
                                    if (d[k, j] == 1)
                                    {
                                        e++;
                                    }
                                }
                                else if (k % 2 == 1)
                                {
                                    if (d[k, j] == 0)
                                    {
                                        e++;
                                    }
                                }
                            }
                        }

                    }
                    if (e < f)
                    {
                        f = e;
                    }
                    e = 0;
                    for (int j = 0; j < 8; j++)
                    {
                        for (int k = 0; k < 8; k++)
                        {
                            //짝짝 - 0 , 홀짝 - 1 , 짝홀 - 1, 홀홀 - 0
                            if (j % 2 == 0)
                            {
                                if (k % 2 == 0)
                                {
                                    if (d[k, j] == 1)
                                    {
                                        e++;
                                    }
                                }
                                else if (k % 2 == 1)
                                {
                                    if (d[k, j] == 0)
                                    {
                                        e++;
                                    }
                                }
                            }
                            else if (j % 2 == 1)
                            {
                                if (k % 2 == 0)
                                {
                                    if (d[k, j] == 0)
                                    {
                                        e++;
                                    }
                                }
                                else if (k % 2 == 1)
                                {
                                    if (d[k, j] == 1)
                                    {
                                        e++;
                                    }
                                }
                            }
                        }

                    }
                    if (e < f)
                    {
                        f = e;
                    }
                    e = 0;
                }
            }
            Console.WriteLine(f);

        }
    }
}