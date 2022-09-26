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
            BigInteger dap = 0;
            for(int i =0; i < a; i++)
            {
                int q = Console.Read() - (int)'a' + 1;
                BigInteger h = ((BigInteger.Parse(q.ToString()) * BigInteger.Pow(31,i)));
                dap += h;
            }
            BigInteger j = dap % BigInteger.Parse("1234567891");
            Console.WriteLine(j);
        }
    }
}