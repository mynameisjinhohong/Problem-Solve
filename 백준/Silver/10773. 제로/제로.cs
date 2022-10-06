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

            Stack<int> st = new Stack<int>();

            for(int i =0; i<a; i++)

            {

                int b = int.Parse(Console.ReadLine());

                if(b == 0)

                {

                    st.Pop();

                }

                else

                {

                    st.Push(b);

                }

            }

            int c = 0;

            int d = st.Count;

            for(int i =0; i<d; i++)

            {

                

                c += st.Pop();

            }

            Console.WriteLine(c);

        }

    }

}