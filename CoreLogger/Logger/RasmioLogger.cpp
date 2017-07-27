#include "RasmioLogger.h"
#include "Color.h"

#include <iostream>
#include <Windows.h>

namespace RasmioCore
{
	bool RasmioLogger::m_ErrorsEnabled;
	bool RasmioLogger::m_WarningsEnabled;
	bool RasmioLogger::m_MessagesEnabled;
	int RasmioLogger::m_TextColor;


	void RasmioLogger::Init()
	{
		EnableErrors();
		EnableWarnings();
		EnableMessages();

		SetTextColor(Color::WHITE);
	}

	bool RasmioLogger::SetTextColor(int textColor)
	{
		if (textColor < 0 || textColor >= 256) {
			LogError("The textColor value must be between 0 and 255.");
			return false;
		}
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		FlushConsoleInputBuffer(hConsole);
		SetConsoleTextAttribute(hConsole, textColor);
		return true;
	}

	bool RasmioLogger::LogMessage(const char* message)
	{
		if (m_MessagesEnabled) {
			SetTextColor(Color::WHITE);
			std::cout << message << std::endl;
			return true;
		}
		return false;
	}

	bool RasmioLogger::LogWarning(const char* warning)
	{
		if (m_WarningsEnabled) {
			SetTextColor(Color::YELLOW);
			std::cout << "WARNING: " << warning << std::endl;
			return true;
		}
		return false;
	}

	bool RasmioLogger::LogError(const char* error)
	{
		if (m_ErrorsEnabled) {
			SetTextColor(Color::RED);
			std::cout << "ERROR: " << error << std::endl;
			return true;
		}
		return false;
	}

	void RasmioLogger::EnableErrors() 
	{
		m_ErrorsEnabled = true;
	}

	void RasmioLogger::DisableErrors()
	{
		m_ErrorsEnabled = false;
	}

	void RasmioLogger::EnableWarnings()
	{
		m_WarningsEnabled = true;
	}

	void RasmioLogger::DisableWarnings()
	{
		m_WarningsEnabled = false;
	}

	void RasmioLogger::EnableMessages()
	{
		m_MessagesEnabled = true;
	}

	void RasmioLogger::DisableMessages()
	{
		m_MessagesEnabled = false;
	}

}