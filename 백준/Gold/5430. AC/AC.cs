using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Numerics;
using System.Diagnostics;
using System.Collections.Specialized;

namespace TEST
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            StringBuilder sb = new StringBuilder();
            for(int i = 0; i<a; i++)
            {
                string b = Console.ReadLine();
                int c = int.Parse(Console.ReadLine());
                string d = Console.ReadLine();
                List<int> su = new List<int>();
                int lastidx = 1;
                int nowidx = 1;
                for (int j =0; j<c; j++)
                {
                    while (true)
                    {
                        if(d[nowidx] == ',' || d[nowidx] == ']')
                        {
                            su.Add(int.Parse(d.Substring(lastidx, nowidx - lastidx)));
                            nowidx++;
                            lastidx = nowidx;
                            break;
                        }
                        nowidx++;
                    }
                }
                bool end = false;
                bool R = false;
                for(int j =0; j<b.Length; j++)
                {
                    if (end)
                    {
                        break;
                    }
                    if(b[j] == 'R')
                    {
                        R = !R;
                    }
                    else
                    {
                        if(su.Count < 1)
                        {
                            sb.AppendLine("error");
                            end = true;
                        }
                        else
                        {
                            if (R)
                            {
                                su.RemoveAt(su.Count - 1);
                            }
                            else
                            {
                                su.RemoveAt(0);
                            }
                        }
                    }
                }
                if(end == false)
                {
                    sb.Append("[");
                    if (R)
                    {
                        for (int j = 0; j < su.Count; j++)
                        {
                            if (j != su.Count - 1)
                            {
                                sb.Append(su[su.Count - 1 -j] + ",");
                            }
                            else
                            {
                                sb.Append(su[su.Count - 1 - j].ToString());
                            }
                        }
                    }
                    else
                    {
                        for (int j = 0; j < su.Count; j++)
                        {
                            if (j != su.Count - 1)
                            {
                                sb.Append(su[j] + ",");
                            }
                            else
                            {
                                sb.Append(su[j].ToString());
                            }
                        }
                    }
                    sb.AppendLine("]");
                }
            }
            Console.WriteLine(sb);
        }
    }
}