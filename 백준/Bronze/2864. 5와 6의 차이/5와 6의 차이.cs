using System;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            string[] a = Console.ReadLine().Split();
            int bigA = 0;
            int bigB = 0;
            int smallA = 0;
            int smallB = 0;

            char[] ch = a[0].ToCharArray();
            for(int i = 0; i<ch.Length; i++){
                if(ch[i] == '5'){
                    ch[i] = '6';
                }
            }
            bigA = int.Parse(ch);

            char[] ch2 = a[1].ToCharArray();
            for(int i = 0; i<ch2.Length; i++){
                if(ch2[i] == '5'){
                    ch2[i] = '6';
                }
            }
            bigB = int.Parse(ch2);

            for(int i = 0; i<ch2.Length; i++){
                if(ch2[i] == '6'){
                    ch2[i] = '5';
                }
            }
            smallB = int.Parse(ch2);

            for(int i = 0; i<ch.Length; i++){
                if(ch[i] == '6'){
                    ch[i] = '5';
                }
            }
            smallA = int.Parse(ch);

            Console.Write(smallA+smallB);
            Console.Write(" ");
            Console.Write(bigA + bigB);
        }
    }
}