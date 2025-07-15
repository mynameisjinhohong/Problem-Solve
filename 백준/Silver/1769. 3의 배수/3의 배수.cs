using System;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            string a = Console.ReadLine();
            decimal idx = 0;
            bool ans = true;
            string su = a;
            while(su.Length > 1){
                idx += 1;
                decimal test = 0;
                for(int i =0; i<su.Length; i++){
                    test += decimal.Parse(su[i].ToString());
                }
                su = test.ToString();
            }
            decimal end = decimal.Parse(su);
            ans = end % 3 == 0? true : false;
            Console.WriteLine(idx);
            if(ans){
                Console.WriteLine("YES");
            }
            else{
                Console.WriteLine("NO");
            }

        }
    }
}