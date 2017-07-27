#pragma once


#include <iostream>

using namespace System;
using namespace System::Runtime::InteropServices;

namespace Rasmio {

	static const char* string_to_char_array(String^ string)
	{
		const char* str = (const char*)(Marshal::StringToHGlobalAnsi(string)).ToPointer();
		return str;
	}

	template<typename T>
	public ref class ManagedObject
	{	
	protected:
		T* m_Instance;
	public:
		ManagedObject()
		{
		}

		ManagedObject(T* instance)
			: m_Instance(instance)
		{
		}

		virtual ~ManagedObject()
		{
			if (m_Instance != nullptr)
			{
				delete m_Instance;
			}
		}

		 !ManagedObject()
		{
			if (m_Instance != nullptr)
			{
				delete m_Instance;
			}
		}

	};
}
