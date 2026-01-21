string[] a = Console.ReadLine().Split();
int b = int.Parse(a[0]);
int c = int.Parse(a[1]);
int ans = 10 + 2 * (25 - b + c);
if(ans < 0){
    ans = 0;
}
Console.WriteLine(ans);