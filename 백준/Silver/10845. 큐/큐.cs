using System;

using System.Collections.Generic;

using System.Linq;

using System.Text;

using System.Numerics;



namespace TEST

{

    class Program

    {

        static void Main(string[] args)

        {

            int a = int.Parse(Console.ReadLine());

            List<int> Deque = new List<int>();

            for (int i = 0; i < a; i++)

            {

                string[] b = Console.ReadLine().Split();
                StringBuilder sb = new StringBuilder();
                switch (b[0])

                {

                    case "push":

                        Deque.Add(int.Parse(b[1]));

                        break;

                    case "pop":

                        if (Deque.Count > 0)

                        {
                            sb.Append(Deque[0]);
                            Console.WriteLine(sb);

                            Deque.RemoveAt(0);

                        }

                        else

                        {
                            sb.Append(-1);
                            Console.WriteLine(sb);

                        };

                        break;

                    case "size":
                        sb.Append(Deque.Count);
                        Console.WriteLine(sb);

                        break;

                    case "empty":

                        if (Deque.Count > 0)

                        {
                            sb.Append(0);
                            Console.WriteLine(sb);

                        }

                        else

                        {
                            sb.Append(1);
                            Console.WriteLine(sb);

                        }

                        break;

                    case "front":
                        if (Deque.Count > 0)

                        {
                            sb.Append(Deque[0]);
                            Console.WriteLine(sb);

                        }

                        else

                        {
                            sb.Append(-1);
                            Console.WriteLine(sb);

                        }

                        break;

                    case "back":
                        if (Deque.Count > 0)

                        {
                            sb.Append(Deque[Deque.Count - 1]);
                            Console.WriteLine(sb);

                        }

                        else

                        {
                            sb.Append(-1);
                            Console.WriteLine(sb);

                        }
                        break;







                }

            }



        }



    }





}