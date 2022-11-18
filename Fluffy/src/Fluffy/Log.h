#pragma once

#include "Core.h"
#include "spdlog/spdlog.h" 
#include "spdlog/fmt/ostr.h"


namespace Fluffy {
	class FLUFFY_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core log macr
#define FE_CORE_INFO(...)	::Fluffy::Log::GetCoreLogger()->info(__VA_ARGS__)
#define FE_CORE_WARN(...)	::Fluffy::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define FE_CORE_TRACE(...) ::Fluffy::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define FE_CORE_ERROR(...) ::Fluffy::Log::GetCoreLogger()->error(__VA_ARGS__)
#define FE_CORE_FATAL(...) ::Fluffy::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macr
#define FE_CLIENT_INFO(...)	::Fluffy::Log::GetClientLogger()->info(__VA_ARGS__)
#define FE_CLIENT_WARN(...)	::Fluffy::Log::GetClientLogger()->warn(__VA_ARGS__)
#define FE_CLIENT_TRACE(...)	::Fluffy::Log::GetClientLogger()->trace(__VA_ARGS__)
#define FE_CLIENT_ERROR(...)	::Fluffy::Log::GetClientLogger()->error(__VA_ARGS__)
#define FE_CLIENT_FATAL(...)	::Fluffy::Log::GetClientLogger()->fatal(__VA_ARGS__)


