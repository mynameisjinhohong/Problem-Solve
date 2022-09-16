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

            string[] a = Console.ReadLine().Split();

            int people = int.Parse(a[0]);

            int delete = int.Parse(a[1]);

            int[] pe = new int[people];

            List<int> an = new List<int>();

            for(int i =0; i<people; i++)

            {

                pe[i] = i+1;

            }

            int lastIndex = 0;

            for (int i = 0; i < people; i++)

            {

                int go = 0;

                for(int j =0; j<delete;j++)

                {

                    if(go + lastIndex >= people)

                    {

                        lastIndex -= people;

                    }

                    if(pe[go + lastIndex] == 0)

                    {

                        j--;

                    }

                    if(j == delete - 1)

                    {

                        an.Add(pe[go + lastIndex]);

                        pe[go + lastIndex] = 0;

                        lastIndex = go + lastIndex;

                        break;

                    }

                    go++;

                }

            }

            Console.Write("<");

            for(int i =0; i<an.Count-1; i++)

            {

                Console.Write(an[i]);

                Console.Write(", ");

            }

            Console.Write(an[an.Count - 1]);

            Console.Write(">");

 

        }

 

    }

 

 

}