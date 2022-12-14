#pragma once

#include "Core.h"
#include "Events/Event.h"

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