int a = int.Parse(Console.ReadLine());
            string[] b = Console.ReadLine().Split();
            List<int> c = new List<int>();
            for(int i =0; i< b.Length; i++)
            {
                c.Add(int.Parse(b[i]));
            }
            float d = (float)c.Average();
            float e = (d/(float)c.Max()) * 100;
            Console.WriteLine(e);