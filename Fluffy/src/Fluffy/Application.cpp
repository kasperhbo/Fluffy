#include "fepch.h"	

#include "Application.h"

#include "Fluffy/Events/ApplicationEvent.h"
#include "Fluffy/Log.h"

namespace Fluffy
{
	Fluffy::Application::Application()
	{
	}

	Fluffy::Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		
		if (e.IsInCategory(EventCategoryApplication))
		{
			FE_CORE_TRACE(e);			
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			FE_CORE_TRACE(e);
		}

		while (true);
	}
}
