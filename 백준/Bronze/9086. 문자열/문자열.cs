int a = int.Parse(Console.ReadLine());
            for(int i =0; i<a; i++)
            {
                string b = Console.ReadLine();
                char[] c = b.ToCharArray();
                Console.Write(c[0]);
                Console.WriteLine(c[c.Length - 1]);
            }