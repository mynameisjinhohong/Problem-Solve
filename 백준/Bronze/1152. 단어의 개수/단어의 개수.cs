string[] a = Console.ReadLine().Split();
            if (a[0] == "" && a[a.Length - 1] == "")
            {
                Console.WriteLine(a.Length - 2);
            }
            else if (a[0] == "" || a[a.Length -1] == "")
            {
                Console.WriteLine(a.Length -1);
            }
            else
            {
                Console.WriteLine(a.Length);
            }