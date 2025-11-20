using System;
using System.Numerics;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            int a = int.Parse(Console.ReadLine());
            for(int i = 0; i<a; i++){
                string b = Console.ReadLine();
                int hap = 0;
                for(int j =0; j< b.Length; j++){
                    hap += b[j] - '0';
                }
                if(hap % 9 == 0){
                    Console.WriteLine("YES");
                }
                else{
                    Console.WriteLine("NO");
                }
            }
        }
    }
}