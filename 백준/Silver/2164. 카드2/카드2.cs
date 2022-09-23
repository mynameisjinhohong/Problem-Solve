using System;



using System.Collections.Generic;



using System.Linq;



using System.Text;



using System.Numerics;



using System.Diagnostics;





namespace TEST



{



    class Program



    {



        static void Main(string[] args)

        {
            int a = int.Parse(Console.ReadLine());
            Queue<int> que = new Queue<int>();
            for(int i = 1; i <= a; i++)
            {
                que.Enqueue(i);
            }
            while(que.Count > 1)
            {
                que.Dequeue();
                que.Enqueue(que.Dequeue());
            }
            StringBuilder sb = new StringBuilder();
            sb.Append(que.Dequeue());
            Console.WriteLine(sb);
        }
    }
}