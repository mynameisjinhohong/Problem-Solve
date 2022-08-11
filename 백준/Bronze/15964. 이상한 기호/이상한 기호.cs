string[] a = Console.ReadLine().Split();
            long b = (long.Parse(a[0]) + long.Parse(a[1])) * (long.Parse(a[0]) - long.Parse(a[1]));
            Console.Write(b);