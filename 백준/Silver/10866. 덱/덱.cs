using System;

using System.Collections.Generic;

using System.Linq;

using System.Text;

using System.Numerics;

using System.Diagnostics;



namespace TEST
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            string[] Deque = new string[10000];
            int front = 5000;
            int end = 5001;
            for (int i = 0; i < a; i++)
            {
                StringBuilder sb = new StringBuilder();
                string[] b = Console.ReadLine().Split();
                switch (b[0])
                {
                    case "push_front":
                        Deque[front] = b[1];
                        front--;
                        break;
                    case "push_back":
                        Deque[end] = b[1];
                        end++;
                        break;
                    case "pop_front":
                        if (end-front>1)
                        {
                            sb.Append(Deque[front + 1]);
                            front++;
                            Console.WriteLine(sb);

                        }
                        else
                        {
                            sb.Append("-1");
                            Console.WriteLine(sb);
                        }
                        break;
                    case "pop_back":
                        if (end - front > 1)
                        {
                            sb.Append(Deque[end-1]);
                            end--;
                            Console.WriteLine(sb);
                        }
                        else
                        {
                            sb.Append("-1");
                            Console.WriteLine(sb);
                        }
                        break;
                    case "size":
                        sb.Append((end-front-1));
                        Console.WriteLine(sb);
                        break;
                    case "empty":
                        if (end - front > 1)
                        {
                            sb.Append("0");
                            Console.WriteLine(sb);
                        }
                        else
                        {
                            sb.Append("1");
                            Console.WriteLine(sb);
                        }
                        break;
                    case "front":
                        if (end - front > 1)
                        {
                            sb.Append(Deque[front + 1]);
                            Console.WriteLine(sb);
                        }
                        else
                        {
                            sb.Append("-1");
                            Console.WriteLine(sb);
                        }
                        break;
                    case "back":
                        if (end - front > 1)
                        {
                            sb.Append(Deque[end - 1]);
                            Console.WriteLine(sb);
                        }
                        else
                        {
                            sb.Append("-1");
                            Console.WriteLine(sb);
                        }
                        break;

                }
                
            }
        }

    }





}

