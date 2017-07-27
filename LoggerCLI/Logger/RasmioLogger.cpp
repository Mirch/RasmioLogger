#include "RasmioLogger.h"


namespace Rasmio
{
	void RasmioLogger::Init()
	{
		RasmioCore::RasmioLogger::Init();
	}

	bool RasmioLogger::SetTextColor(int textColor)
	{
		return RasmioCore::RasmioLogger::SetTextColor(textColor);
	}

	bool RasmioLogger::LogMessage(String^ message)
	{
		return RasmioCore::RasmioLogger::LogMessage(string_to_char_array(message));
	}

	bool RasmioLogger::LogWarning(String^ warning)
	{
		return RasmioCore::RasmioLogger::LogWarning(string_to_char_array(warning));
	}

	bool RasmioLogger::LogError(String^ error)
	{
		return RasmioCore::RasmioLogger::LogError(string_to_char_array(error));
	}






}