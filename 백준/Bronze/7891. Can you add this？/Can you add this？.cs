int a = int.Parse(Console.ReadLine());
for(int i =0; i<a; i++)
{
    string[] strp = Console.ReadLine().Split();
    Console.WriteLine(int.Parse(strp[0]) + int.Parse(strp[1]));
}