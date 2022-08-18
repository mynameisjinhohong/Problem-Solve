string[] s = Console.ReadLine().Split();
            int A = Convert.ToInt32(s[0]);
            int B = Convert.ToInt32(s[1]);
            int V = Convert.ToInt32(s[2]);
if((V-A)%(A-B)==0){
            Console.Write(((V-A)/(A-B))+1);}
else{
    Console.Write((V-A)/(A-B)+2);
}