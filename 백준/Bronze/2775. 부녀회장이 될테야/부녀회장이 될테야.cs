int[,] a = new int[15, 14];
            for(int i =0; i<14; i++)
            {
                a[0, i] = i+1;
            }
            for(int i =0; i<15; i++)
            {
                a[i, 0] = 1;
            }
            for(int i =1; i<15; i++)
            {
                for(int j = 1; j<14; j++)
                {
                    a[i, j] = a[i - 1, j] + a[i, j - 1];
                    //Console.Write(a[i, j] + " ");
                }
                //Console.Write("\n");
            }

            //for (int i = 0; i < 15; i++)
            //{
            //    for (int j = 0; j < 14; j++)
            //    {
            //        Console.Write(a[i, j] + " ");
            //    }
            //    Console.WriteLine();
            //}
            int b = int.Parse(Console.ReadLine());
            int[] e = new int[b];
            for (int i = 0; i < b; i++)
            {
                int c = int.Parse(Console.ReadLine());
                int d = int.Parse(Console.ReadLine());
                e[i] = a[c, d - 1];
            }
            for (int i = 0; i < e.Length; i++)
            {
                Console.WriteLine(e[i]);
            }