int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            int c = int.Parse(Console.ReadLine());
            int d = a * b * c;
            char[] e = d.ToString().ToCharArray();
            for (int k = 0; k < 10; k++)
            {
                int f = 0;
                for (int i = 0; i < e.Length; i++)
                {
                    if (e[i].ToString() == k.ToString())
                    {

                        f++;
                    }
                }
                Console.WriteLine(f);
            }