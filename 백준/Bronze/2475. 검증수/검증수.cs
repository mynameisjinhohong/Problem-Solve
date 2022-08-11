string[] a = Console.ReadLine().Split();
            int b = 0;
            for(int i=0; i<a.Length; i++)
            {
                b += int.Parse(a[i]) * int.Parse(a[i]);
            }
            b = b % 10;
            Console.WriteLine(b);