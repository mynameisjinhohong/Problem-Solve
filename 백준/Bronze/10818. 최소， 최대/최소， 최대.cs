int a = int.Parse(Console.ReadLine());
            string[] b = Console.ReadLine().Split();
            int c = -1000000, d = 1000000;
            for(int i =0; i<a; i++)
            {
                if (c < int.Parse(b[i]))
                {
                    c = int.Parse(b[i]);
                }
                if(d> int.Parse(b[i]))
                {
                    d = int.Parse(b[i]);
                }
            }
            Console.WriteLine(d + " " + c);