char[] a = Console.ReadLine().ToCharArray();
            List<char> b = new List<char>();
            for(int i=0; i < a.Length; ++i)
            {
                if (char.IsLower(a[i]))
                {
                    b.Add(char.ToUpper(a[i]));
                }
                else
                {
                    b.Add(char.ToLower(a[i]));
                }
            }
            for(int i =0; i<b.Count; i++)
            {
                Console.Write(b[i]);
                            }