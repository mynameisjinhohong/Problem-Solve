char[] a = Console.ReadLine().ToCharArray();
            Dictionary<char, int> dic = new Dictionary<char, int>();
            dic.Add(char.ToUpper(a[0]), 0);
            for(int i =0; i<a.Length; i++)
            {
                int count = 0;
                bool plus = false;
                foreach(char ch in dic.Keys)
                {
                    if(char.ToUpper(a[i]) == char.ToUpper(ch) )
                    {
                        plus = true;
                        count++;
                    }

                }
                if(plus == true)
                {
                    dic[char.ToUpper(a[i])] += 1;
                }
                if (count != 1)
                {
                    dic.Add(char.ToUpper(a[i]), 1);
                }

            }
            int say = 0;
            char say1 = 'a';
            foreach(KeyValuePair<char,int> item in dic)
            {
                int val = item.Value;
                char si = item.Key;
                if(say == val)
                {
                    say1 = '?';
                    
                }
                else if(say < val)
                {
                    say = val;
                    say1 = char.ToUpper(si);
                }
            }
            if (say1 != '?')
            {
                say1 = char.ToUpper(say1);
            }
            Console.WriteLine(say1);