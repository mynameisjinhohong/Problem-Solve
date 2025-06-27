using System;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            string[] a = Console.ReadLine().Split();
            string[] b= Console.ReadLine().Split();
            int[] hey = new int[b.Length];
            for(int i = 0; i<hey.Length; i++){
                hey[i] = int.Parse(b[i]);
            }
            int ans = int.Parse(a[1]);
            int idx = 0;
            while(ans <= hey[idx]){
                ans += 1;
                idx += 1;
                if(idx >= hey.Length)
                {
                    idx = 0;
                }
            }
            Console.WriteLine(idx+1);
        }
    }
}