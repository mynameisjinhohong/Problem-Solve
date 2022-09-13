using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;

namespace TEST
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            Dictionary<int, List<string>> people = new Dictionary<int, List<string>>();
            for(int i = 0; i<a; i++)
            {
                string[] b = Console.ReadLine().Split();
                if (people.ContainsKey(int.Parse(b[0])))
                {
                    people[int.Parse(b[0])].Add(b[1]);
                }
                else
                {
                    people.Add(int.Parse(b[0]), new List<string>() {b[1]});
                }
            }
            people = people.OrderBy(x => x.Key).ToDictionary(x => x.Key, x => x.Value);
            foreach(KeyValuePair<int,List<string>> hal in people)
            {
                foreach(string hel in hal.Value)
                {
                    Console.WriteLine(hal.Key + " " + hel);
                }
            }

        }

    }

}