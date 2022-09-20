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
            StringBuilder sb = new StringBuilder();

                string[] b = Console.ReadLine().Split();

                switch (b[0])

                {

                    case "push":

                        Deque.Add(int.Parse(b[1]));

                        break;

                    case "pop":

                        if (Deque.Count > 0)

                        {
                            sb.Append(Deque[Deque.Count - 1]);
                            Console.WriteLine(sb);

                            Deque.RemoveAt(Deque.Count - 1);

                        }

                        else

                        {
                            sb.Append("-1");
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
                            sb.Append("0");
                            Console.WriteLine(sb);

                        }

                        else

                        {
                            sb.Append("1");
                            Console.WriteLine(sb);

                        }

                        break;

                    case "top":

                        if (Deque.Count > 0)

                        {
                            sb.Append(Deque[Deque.Count - 1]);
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
