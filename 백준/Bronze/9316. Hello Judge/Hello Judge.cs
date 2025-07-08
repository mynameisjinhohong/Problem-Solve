using System;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            int a = int.Parse(Console.ReadLine());
            for(int i = 0; i<a; i++){
                Console.WriteLine("Hello World, Judge "+(i+1) + "!");
            }
        }
    }
}