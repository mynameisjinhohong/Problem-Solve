string[] a = Console.ReadLine().Split();
            int b = int.Parse(a[0]);
            int c = int.Parse(a[1]);
            List<int> li = new List<int>();
            List<int> st = new List<int>();
            for(int i =0; i< b*2; i++)
            {
                string[] d = Console.ReadLine().Split();
                for(int k = 0; k< c; ++k)
                {
                    li.Add(int.Parse(d[k]));
                }

            }
            for(int i =0; i<b*c; ++i)
            {
                st.Add(li[i] + li[i+(b*c)]);
            }
            for(int i =0; i<st.Count; ++i)
            {
                Console.Write(st[i]);
                if((i+1)%c == 0)
                {
                    Console.Write("\n");
                }
                else
                {
                    Console.Write(" ");
                }
            }