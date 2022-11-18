#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Fluffy::Application* Fluffy::CreateApplication();

int main(int argc, char** argv)
{
	Fluffy::Log::Init();
	
	std::string motd = "Hello And Welcome By The Fluffy Game Engine!";
	FE_CORE_INFO(motd); 

	auto app = Fluffy::CreateApplication();
	app->Run();
	delete app;
}

#endif


