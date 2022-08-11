List<String> a = new List<string>();
            while (true)
            {
                a.Add(Console.ReadLine());
                if (a.LastIndexOf("") == a.Count-1)
                {
                    break;
                }
                else if(a.Count > 100)
                {
                    break;
                }
            }
            for(int i=0; i<a.Count; i++)
            {
                Console.WriteLine(a[i]);
            }