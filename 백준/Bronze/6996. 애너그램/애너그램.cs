using System;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            int a = int.Parse(Console.ReadLine());
            for(int i = 0; i<a; i++){
                string[] b = Console.ReadLine().Split();
                bool same = true;
                int[] al = new int[26];
                for(int j = 0; j<b[0].Length; j++){
                    al[(int)b[0][j] - 97]++;
                }
                for(int j = 0; j<b[1].Length; j++){
                    al[(int)b[1][j] - 97]--;
                }
                for(int j = 0; j<26; j++){
                    if(al[j] != 0){
                        same = false;
                        break;
                    }
                }
                if(same){
                Console.WriteLine($"{b[0]} & {b[1]} are anagrams.");
                    
                }
                else{
                    Console.WriteLine($"{b[0]} & {b[1]} are NOT anagrams.");
                }
            }
        }
    }
}