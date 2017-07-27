#include <iostream>

#include "Logger\RasmioLogger.h"

using namespace Rasmio;

int main()
{
	RasmioLogger::Init();
	RasmioLogger::LogMessage("Test message!");
	RasmioLogger::LogWarning("Test warning!");
	RasmioLogger::LogError("Test error!");

	std::cin.get();
}