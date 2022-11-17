#pragma once

#include "Core.h"

namespace Fluffy 
{
	class FLUFFY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	
	Application* CreateApplication();
}