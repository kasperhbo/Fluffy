#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Fluffy::Application* Fluffy::CreateApplication();

int main(int argc, char** argv)
{
	Fluffy::Log::Init();

	FL_CORE_WARN("Initialize Log");
	FL_CLIENT_INFO("Hello Log");


	auto app = Fluffy::CreateApplication();
	app->Run();
	delete app;
}

#endif


