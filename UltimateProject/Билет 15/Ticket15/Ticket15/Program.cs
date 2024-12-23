using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Ticket15
{
    internal class Program
    {
        static async Task Main(string[] args)
        {
            int a = Convert.ToInt32(Console.ReadLine());
            int b = Convert.ToInt32(Console.ReadLine());

            List<int> result = await StartSimpleNumber(a,b);

            Console.WriteLine($"Простые числа в диапазоне от {a} до {b}:");
            foreach (int list in result)
            {
                Console.Write(list + " ");
            }
            Console.ReadKey();
        }

        static async Task<List<int>> StartSimpleNumber(int a, int b)
        {
            List<Task<int?>> tasks = new List<Task<int?>>();

            for (int i = a; i < b; i++)
            {
                int number = i;
                tasks.Add(Task.Run(() => SimpleNumber(number)));
            }

            int?[] result = await Task.WhenAll(tasks);

            return result.Where(x => x.HasValue).Select(x => x.Value).ToList();
        }

        static int? SimpleNumber(int n)
        {
            if (n < 2) return null;

            for (int i = 2; i <= Math.Sqrt(n); i++)
            {
                if (n % i == 0) return null;
            }

            return n;
        }
    }
}
