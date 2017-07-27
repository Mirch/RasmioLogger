using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Rasmio;

namespace RasmioLoggerSandbox
{
    class Program
    {
        static void Main(string[] args)
        {
            RasmioLogger.Init();

            RasmioLogger.LogError("C# Error!");
            RasmioLogger.LogWarning("C# Warning!");
            RasmioLogger.LogMessage("C# Message!");

            RasmioLogger.WarningsEnabled = false;
            RasmioLogger.LogWarning("This will not be displayed!");

            Console.Read();
        }
    }
}
