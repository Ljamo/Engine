#pragma once
#include "Application.h"
#include "../Engine.h"

#ifdef EN_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
	Engine::Log::Init();
	EGN_CORE_WARN("Issie is a lil ");
	EGN_ERROR("CUNT");

	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}
#endif