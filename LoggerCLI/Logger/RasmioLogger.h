#pragma once

#include "../LoggerCLI.h"
#include "../../CoreLogger/Logger/RasmioLogger.h"

namespace Rasmio {

	public ref class RasmioLogger
	{
	public:

		static property bool ErrorsEnabled
		{
		private:
			bool get()
			{
				return false;
			}
		public:
			void set(bool value)
			{
				if (value)
					RasmioCore::RasmioLogger::EnableErrors();
				else
					RasmioCore::RasmioLogger::DisableErrors();
			}
		}

		static property bool WarningsEnabled
		{
		private:
			bool get()
			{
				return false;
			}
		public:
			void set(bool value)
			{
				if (value)
					RasmioCore::RasmioLogger::EnableWarnings();
				else
					RasmioCore::RasmioLogger::DisableWarnings();
			}
		}

		static property bool MessagesEnabled
		{
		private:
			bool get()
			{
				return false;
			}
		public:
			void set(bool value)
			{
				if (value)
					RasmioCore::RasmioLogger::EnableMessages();
				else
					RasmioCore::RasmioLogger::DisableMessages();
			}
		}

		static void Init();

		static bool SetTextColor(int textColor);

		static bool LogMessage(String^ message);
		static bool LogWarning(String^ warning);
		static bool LogError(String^ error);

	};

}