string[] a = Console.ReadLine().Split();
            int b,c;
            if(int.Parse(a[2])- int.Parse(a[0]) < int.Parse(a[0]))
            {
                b = int.Parse(a[2]) - int.Parse(a[0]);
            }
            else
            {
                b = int.Parse(a[0]);
            }
            if(int.Parse(a[3]) - int.Parse(a[1]) < int.Parse(a[1]))
            {
                c = int.Parse(a[3]) - int.Parse(a[1]);
            }
            else
            {
                c = int.Parse(a[1]);
            }
            if (b > c)
            {
                Console.WriteLine(c);
            }
            else
            {
                Console.WriteLine(b);
            }