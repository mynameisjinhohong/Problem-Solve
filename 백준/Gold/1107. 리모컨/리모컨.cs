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
            StringBuilder first = new StringBuilder();
            first.Append(Console.ReadLine());
            int a = int.Parse(first.ToString());
            first.Clear();
            first.Append(a);
            int b = int.Parse(Console.ReadLine());
            int[] c = new int[0];
            if (b != 0)
            {
                c = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            }
            List<int> noUse = c.ToList();
            List<int> Use = new List<int>();
            Use.Sort();
            for(int i=0; i<10; i++)
            {
                if (!noUse.Contains(i))
                {
                    Use.Add(i);
                }
            }
            int dap1, dap2 = 0, dap22 = int.MaxValue, dap3 = 0, dap33 = int.MaxValue;
            //dap 1 은 100과 차이
            //dap 2 는 더 작거나 같은 수의 자릿수
            //dap 22는 더 작거나 같은 수
            //dap 3은 더 크거나 같은 수의 자릿수
            //dpa 33은 더 크거나 같은 수
            //100이랑 차이
            dap1 = Math.Abs(a - 100);
            if(Use.Count > 0)
            {
                int high = Use.Max();
                int low = Use.Min();
                //작은거
                bool noLow = false;
                bool small = false;
                bool end = false;
                bool down = false;
                StringBuilder dp2 = new StringBuilder();
                if (first.Length > 1)
                {
                    for (int i = 0; i < first.Length; i++)
                    {
                        int test = int.Parse(first[i].ToString());
                        if (small == true)
                        {
                            test--;
                            end = true;
                        }
                        if (Use.Contains(test))
                        {
                            dp2.Append(test);
                        }
                        else
                        {
                            while (true)
                            {
                                test--;
                                if (Use.Contains(test))
                                {
                                    if(i == 0 && test == 0)
                                    {
                                        down = true;
                                        end = true;
                                        break;
                                    }
                                    dp2.Append(test);
                                    end = true;
                                    break;
                                }
                                if (test < 0)
                                {
                                    if (i == 0)
                                    {
                                        down = true;
                                        end = true;
                                    }
                                    else
                                    {
                                        small = true;
                                        dp2.Remove(i-1,1);
                                        i -= 2;
                                    }
                                    break;
                                }
                            }

                        }
                        if (end == true)
                        {
                            break;
                        }
                    }
                    if (end == true && down == true)
                    {
                        dp2.Clear();
                        for (int i = 0; i < first.Length - 1; i++)
                        {
                            dp2.Append(high);
                        }
                    }
                    else if (end == true)
                    {
                        int hh = dp2.Length;
                        for (int i = 0; i < first.Length - hh; i++)
                        {
                            dp2.Append(high);
                        }
                    }
                }
                else
                {
                    int test = int.Parse(first[0].ToString());
                    while (true)
                    {
                        if (Use.Contains(test))
                        {
                            dp2.Append(test);
                            break;
                        }
                        if (test < 0)
                        {
                            noLow = true;
                            break;
                        }
                        test--;
                    }
                }
                end = false;
                if (noLow == false)
                {
                    dap22 = int.Parse(dp2.ToString());
                    dap2 = dap22.ToString().Length;
                }
                else
                {
                    dap22 = int.MaxValue;
                }
                //큰거
                bool noHigh = false;
                bool up = false;
                bool big = false;
                dp2.Clear();
                if (!(noUse.Contains(1) && noUse.Contains(2) && noUse.Contains(3) && noUse.Contains(4) && noUse.Contains(5) && noUse.Contains(6) && noUse.Contains(7) && noUse.Contains(8) && noUse.Contains(9))) // 만약에 0만 사용 가능하면 더 큰수를 만드는건 불가능 하므로 예외처리
                {
                    for (int i = 0; i < first.Length; i++)
                    {
                        int test = int.Parse(first[i].ToString());
                        if (up == true)
                        {
                            end = true;
                            test++;
                        }
                        if (Use.Contains(test))
                        {
                            dp2.Append(test);
                        }
                        else
                        {
                            while (true)
                            {
                                test++;
                                if (Use.Contains(test))
                                {
                                    dp2.Append(test);
                                    end = true;
                                    break;
                                }
                                if (test >= 10)
                                {
                                    if (i == 0)
                                    {
                                        big = true;
                                        end = true;
                                        break;
                                    }
                                    else
                                    {
                                        up = true;
                                        dp2.Remove(i - 1, 1);
                                        i -=2;
                                    }
                                    break;
                                }
                            }

                        }
                        if (end == true)
                        {
                            break;
                        }
                    }
                    if (end == true && big == true)
                    {
                        for (int j = 0; j < first.Length + 1; j++)
                        {
                            if(j == 0 && low == 0)
                            {
                                dp2.Append(Use[1]);
                            }
                            else
                            {
                                dp2.Append(low);
                            }
                        }
                    }
                    else if (end == true)
                    {
                        int hh = dp2.Length;
                        for (int i = 0; i < first.Length - hh; i++)
                        {
                            dp2.Append(low);
                        }
                    }
                }
                else
                {
                    noHigh = true;
                }
                if (noHigh == false)
                {
                    dap33 = int.Parse(dp2.ToString());
                    dap3 = dap33.ToString().Length;
                }
                else
                {
                    dap33 = int.MaxValue;
                }
            }
            
            dap1 = Math.Min(dap1, dap2 + Math.Abs(dap22 - a)); //3개 숫자중에 제일 작은 숫자
            dap1 = Math.Min(dap1, dap3 + Math.Abs(dap33 - a));
            Console.WriteLine(dap1);
        }
    }
}