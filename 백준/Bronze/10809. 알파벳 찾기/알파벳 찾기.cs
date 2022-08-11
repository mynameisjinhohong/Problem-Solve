 char[] a = Console.ReadLine().ToCharArray();
            int[] b = new int[26];
            for(int i =0; i<b.Length; i++)
            {
                b[i] = -1;
            }
            for(int i = a.Length-1; i>=0; i--)
            {
                b[(int)a[i] - 97] = i;
            }
            for(int i =0; i<b.Length; i++)
            {
                Console.Write(b[i] + " ");
            }
            