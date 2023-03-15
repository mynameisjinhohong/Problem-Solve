using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Numerics;
using System.Diagnostics;
using System.Collections.Specialized;

namespace TEST
{
    struct Node
    {
        public List<int> neighbors;
        public bool check;
        public int myPos;
    }
    class Program
    {
        static int XYZ(int a0,int a1,int j,int i,int k)
        {
            return ((a0 * a1) * k) + (a0 * i) + j;
        }
        static void Main(string[] args)
        {
            int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            Node[,,] nodes = new Node[a[0], a[1], a[2]];
            List<int> startPoint = new List<int>();
            int needToma = 0;
            for (int k = 0; k < a[2]; k++)
            {
                for (int i = 0; i < a[1]; i++)
                {
                    string[] b = Console.ReadLine().Split();
                    for (int j = 0; j < a[0]; j++)
                    {
                        if (b[j] != "-1")
                        {
                            Node node = new Node();
                            node.neighbors = new List<int>();
                            needToma += 1;
                            node.myPos = XYZ(a[0], a[1], j, i, k);
                            if (b[j] == "1")
                            {
                                node.check = true;
                            }
                            else
                            {
                                node.check = false;
                            }
                            if (j != 0 && b[j - 1] != "-1")
                            {
                                node.neighbors.Add(XYZ(a[0], a[1], j - 1, i, k));
                                nodes[j - 1, i, k].neighbors.Add(XYZ(a[0], a[1], j, i, k));
                            }
                            if (i != 0 && nodes[j, i - 1, k].neighbors != null)
                            {
                                node.neighbors.Add(XYZ(a[0], a[1], j, i - 1, k));
                                nodes[j, i - 1, k].neighbors.Add(XYZ(a[0], a[1], j, i, k));
                            }
                            if (k != 0 && nodes[j, i, k - 1].neighbors != null)
                            {
                                node.neighbors.Add(XYZ(a[0], a[1], j, i, k - 1));
                                nodes[j, i, k - 1].neighbors.Add(XYZ(a[0], a[1], j, i, k));
                            }
                            nodes[j, i, k] = node;
                            if (b[j] == "1")
                            {
                                startPoint.Add(XYZ(a[0], a[1], j, i, k));
                            }
                        }
                    }
                }
            }
            Console.WriteLine(Gotomato(nodes, startPoint, needToma,a[0],a[1]));

        }
        static int Gotomato(Node[,,] nodes, List<int> startPoint, int needToam, int a0,int a1)
        {
            int dap = 0;
            int endToma = startPoint.Count;
            Queue<Node> qu = new Queue<Node>();
            if (endToma == needToam)
            {
                return dap;
            }
            for (int i = 0; i < startPoint.Count; i++)
            {
                int s = startPoint[i];
                int z = s / (a0 * a1);
                int y = (s - (z* (a0 * a1)))/a0;
                int x = s - (z * (a0 * a1)) - (y * a0);
                Node b = nodes[x,y,z];
                qu.Enqueue(b);
            }
            while (true)
            {
                dap++;
                int queC = qu.Count;
                for(int i =0; i<queC; i++)
                {
                    Node a = qu.Dequeue();
                    for (int j = 0; j < a.neighbors.Count; j++)
                    {
                        int s = a.neighbors[j];
                        int z = s / (a0 * a1);
                        int y = (s - (z * (a0 * a1))) / a0;
                        int x = s - (z * (a0 * a1)) - (y * a0);
                        Node b = nodes[x, y,z];
                        if (b.check == false)
                        {
                            b.check = true;
                            qu.Enqueue(b);
                            nodes[x, y, z] = b;
                            endToma++;
                        }
                    }
                }
                if (endToma >= needToam)
                {
                    break;
                }
                if(qu.Count < 1)
                {
                    break;
                }
            }
            if (endToma == needToam)
            {
                return dap;
            }
            else
            {
                return -1;
            }
        }
    }
}