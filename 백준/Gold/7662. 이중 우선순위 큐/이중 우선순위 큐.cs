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
    public class HeapTree
    {
        public List<int> heap;
        public bool maxHeap;
        public HeapTree()
        {
            if (heap == null)
            {
                heap = new List<int>();
                heap.Add(-1);
            }
        }
        public int popHeap()
        {
            if (heap == null)
            {
                heap = new List<int>();
                heap.Add(-1);
            }
            if (heap.Count < 2)
            {
                return 0;
            }
            int pop = heap[1];
            heap[1] = heap[heap.Count - 1];
            heap.RemoveAt(heap.Count - 1);
            int me = 1;
            int insert = 1;
            while (insert != 0)
            {
                insert = checkChild(insert);
                if (insert != 0)
                {
                    swap(me, insert);
                }
                me = insert;
            }
            return pop;
        }

        int checkChild(int idx)
        {
            int re = 0;
            if (maxHeap)
            {
                if (heap.Count - 1 >= idx * 2 + 1)
                {
                    if (heap[idx * 2] > heap[idx * 2 + 1])
                    {
                        re = idx * 2;
                    }
                    else
                    {
                        re = idx * 2 + 1;
                    }
                    if (heap[re] > heap[idx])
                    {
                        return re;
                    }
                    else
                    {
                        return 0;
                    }
                }
                else if (heap.Count - 1 >= idx * 2)
                {
                    re = heap[idx * 2];
                    if (re > heap[idx])
                    {
                        return idx * 2;
                    }
                    else
                    {
                        return 0;
                    }
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                if (heap.Count - 1 >= idx * 2 + 1)
                {
                    if (heap[idx * 2] < heap[idx * 2 + 1])
                    {
                        re = idx * 2;
                    }
                    else
                    {
                        re = idx * 2 + 1;
                    }
                    if (heap[re] < heap[idx])
                    {
                        return re;
                    }
                    else
                    {
                        return 0;
                    }
                }
                else if (heap.Count - 1 >= idx * 2)
                {
                    re = heap[idx * 2];
                    if (re < heap[idx])
                    {
                        return idx * 2;
                    }
                    else
                    {
                        return 0;
                    }
                }
                else
                {
                    return 0;
                }

            }
        }
        public void addHeap(int data)
        {
            if (heap == null)
            {
                heap = new List<int>();
                heap.Add(-1);
                heap.Add(data);
            }
            else
            {
                heap.Add(data);
                int parent, insert = heap.Count - 1;
                if (maxHeap)
                {
                    while (isup(insert))
                    {
                        parent = insert / 2;
                        swap(insert, parent);
                        insert = parent;
                    }
                }
                else
                {
                    while (isdown(insert))
                    {
                        parent = insert / 2;
                        swap(insert, parent);
                        insert = parent;
                    }
                }
            }
        }
        bool isup(int insert)
        {
            if (insert <= 1)
            {
                return false;
            }
            if (heap[insert / 2] < heap[insert])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        bool isdown(int insert)
        {
            if(insert <= 1)
            {
                return false;
            }
            if (heap[insert / 2] > heap[insert])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        void swap(int i1, int i2)
        {
            int temp = heap[i1];
            heap[i1] = heap[i2];
            heap[i2] = temp;
        }


    }
    class Program
    { 
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < a; i++)
            {
                int b = int.Parse(Console.ReadLine());
                HeapTree up = new HeapTree();
                up.maxHeap = true;
                Dictionary<int, int> upTrash = new Dictionary<int, int>();
                HeapTree down = new HeapTree();
                down.maxHeap = false;
                Dictionary<int, int> downTrash = new Dictionary<int, int>();
                for (int j = 0; j < b; j++)
                {
                    string[] c = Console.ReadLine().Split();
                    int x = int.Parse(c[1]);
                    if (c[0] == "I")
                    {
                        up.addHeap(x);
                        down.addHeap(x);
                    }
                    else
                    {
                        if (c[1] == "1")
                        {
                            while (true)
                            {
                                if (up.heap.Count >1)
                                {
                                    int go = up.popHeap();

                                    if (downTrash.Count > 0)
                                    {
                                        if (downTrash.ContainsKey(go))
                                        {
                                            if (downTrash[go] == 0)
                                            {
                                                if (upTrash.ContainsKey(go))
                                                {
                                                    upTrash[go]++;
                                                }
                                                else
                                                {
                                                    upTrash.Add(go, 1);
                                                }
                                                break;
                                            }
                                            else
                                            {
                                                downTrash[go]--;
                                            }
                                        }
                                        else
                                        {
                                            if (upTrash.ContainsKey(go))
                                            {
                                                upTrash[go]++;
                                            }
                                            else
                                            {
                                                upTrash.Add(go, 1);
                                            }
                                            break;
                                        }

                                    }
                                    else
                                    {
                                        if (upTrash.ContainsKey(go))
                                        {
                                            upTrash[go]++;
                                        }
                                        else
                                        {
                                            upTrash.Add(go, 1);
                                        }
                                        break;
                                    }
                                }
                                else
                                {
                                    break;
                                }

                            }
                            
                        }
                        else
                        {
                            while (true)
                            {
                                if (down.heap.Count > 1)
                                {
                                    int go = down.popHeap();
                                    if (upTrash.Count > 0)
                                    {
                                        if (upTrash.ContainsKey(go))
                                        {
                                            if (upTrash[go] == 0)
                                            {
                                                if (downTrash.ContainsKey(go))
                                                {
                                                    downTrash[go]++;
                                                }
                                                else
                                                {
                                                    downTrash.Add(go, 1);
                                                }
                                                break;
                                            }
                                            else
                                            {
                                                upTrash[go]--;
                                            }
                                        }
                                        else
                                        {
                                            if (downTrash.ContainsKey(go))
                                            {
                                                downTrash[go]++;
                                            }
                                            else
                                            {
                                                downTrash.Add(go, 1);
                                            }
                                            break;
                                        }

                                    }
                                    else
                                    {
                                        if (downTrash.ContainsKey(go))
                                        {
                                            downTrash[go]++;
                                        }
                                        else
                                        {
                                            downTrash.Add(go, 1);
                                        }
                                        break;
                                    }
                                }
                                else
                                {
                                    break;
                                }

                            }
                        }
                    }
                }
                if(up.heap.Count > 1 && down.heap.Count > 1)
                {
                    int dap1 = up.popHeap();
                    int dap2 = down.popHeap();
                    while (true)
                    {
                        if (downTrash.Count > 0)
                        {
                            if (downTrash.ContainsKey(dap1))
                            {
                                if(downTrash[dap1] > 0)
                                {
                                    downTrash[dap1]--;
                                    dap1 = up.popHeap();
                                    continue;
                                }

                            }
                        }
                        if (upTrash.Count > 0)
                        {
                            if (upTrash.ContainsKey(dap2))
                            {
                                if (upTrash[dap2] > 0)
                                {
                                    upTrash[dap2]--;
                                    dap2 = down.popHeap();
                                    continue;
                                }

                            }
                        }
                        break;
                    }
                    if(dap1 ==0 && dap2 == 0 && up.heap.Count<2 && down.heap.Count < 2)
                    {
                        sb.AppendLine("EMPTY");
                    }
                    else
                    {
                        sb.AppendLine(dap1 + " " + dap2);
                    }
                }
                else
                {
                    sb.AppendLine("EMPTY");
                }
                
            }
            Console.WriteLine(sb);
        }
    }
}