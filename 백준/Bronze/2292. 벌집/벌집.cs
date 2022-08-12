long a = long.Parse(Console.ReadLine());
            long c = 7;
            long e = 1;
            while (true)
            {
                if(a == 1)
                {
                    Console.WriteLine(1);
                    break;
                }
                if(a<c+1)
                {
                    Console.WriteLine(e + 1);
                    break;

                }
                c = c + 6 * (e + 1);
                e++;
            }