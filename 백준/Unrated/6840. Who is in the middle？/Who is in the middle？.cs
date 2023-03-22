using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Algorithm
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            int c = int.Parse(Console.ReadLine());
            List<int> list = new List<int>();
            list.Add(a);
            list.Add(b);
            list.Add(c);
            list.Sort();
            Console.WriteLine(list[1]);
        }

    }
}
