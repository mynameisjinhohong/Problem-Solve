using System;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            string a = Console.ReadLine();
            string b = Console.ReadLine();
            for(int i = 0 ; i<a.Length; i++){
                b = b.Replace(a[i].ToString(),"");
            }
            Console.WriteLine(b);
        }
    }
}