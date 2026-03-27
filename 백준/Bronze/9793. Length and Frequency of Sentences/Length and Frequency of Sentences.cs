using System;
using System.Collections.Generic;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            int a = int.Parse(Console.ReadLine());
            SortedDictionary<int, int> dic = new SortedDictionary<int, int>();
            for (int i = 0; i < a; i++)
            {
                string[] input = Console.ReadLine().Split(' ', StringSplitOptions.RemoveEmptyEntries);
                if (dic.ContainsKey(input.Length))
                {
                    dic[input.Length] += 1;
                }
                else
                {
                    dic.Add(input.Length, 1);
                }
            }
            foreach (var item in dic)
            {
                Console.WriteLine($"{item.Key} {item.Value}");
            }
        }
    }
}