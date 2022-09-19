using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Diagnostics;
using System.Numerics;

namespace TEST
{
    class Program
    {
        static void Main(string[] args)
        {
            Dictionary<string, char> table = new Dictionary<string, char>()
            {
                {"aespa",'a' },{"baekjoon",'b'},{"cau",'c'},{"debug",'d'},{"edge",'e'},{"firefox",'f'},{"golang",'g'},{"haegang",'h'},{"iu", 'i'},{"java", 'j'},{"kotlin", 'k'},{"lol", 'l'},{"mips", 'm'},{"null", 'n'},{"os", 'o'},{"python", 'p'},{"query", 'q'},{"roka", 'r'},{"solvedac",'s'},{"tod", 't'},{"unix", 'u'},{"virus", 'v'},{"whale", 'w'},{"xcode", 'x'},{"yahoo", 'y'},{"zebra", 'z'}
            };
            Dictionary<char, string> table1 = new Dictionary<char, string>();
            foreach(KeyValuePair<string,char> he in table)
            {
                table1.Add(he.Value, he.Key);
            }

            StringBuilder answer = new StringBuilder();
            string first = Console.ReadLine();
            int last = 0;

            while (true)
            {
                int a = table1[first[last]].Length;

                    if (first.Length >= a + last)
                    {
                        string b = first.Substring(last, a);
                        if (b == table1[first[last]])
                        {
                            answer.Append(first[last]);
                            last += a;
                        }
                        else { break; }
                    if (first.Length == last)
                    {
                        break;
                    }
                }
                    else { break; }
                

                
            }
            if (first.Length == last)
            {
                Console.WriteLine("It's HG!");
                Console.WriteLine(answer);
            }
            else
            {
                Console.WriteLine("ERROR!");
            }
        }
    }
}