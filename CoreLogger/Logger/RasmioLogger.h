#pragma once

namespace RasmioCore
{

#ifdef RASMIO_SHORTCUT_LOGGING
#define LogMessage(x) RasmioLogger.LogMessage(x)
#define LogWarning(x) RasmioLogger.LogWarning(x)
#define LogError(x) RasmioLogger.LogError(x)
#endif


	class RasmioLogger
	{
	private:
		static bool m_ErrorsEnabled;
		static bool m_WarningsEnabled;
		static bool m_MessagesEnabled;

		static int m_TextColor;
	public:
		static void Init();

		static bool SetTextColor(int textColor);

		static bool LogMessage(const char* message);
		static bool LogWarning(const char* warning);
		static bool LogError(const char* error);
		
		static void EnableErrors();
		static void DisableErrors();
		
		static void EnableWarnings();
		static void DisableWarnings();
		
		static void EnableMessages();
		static void DisableMessages();

	};
}