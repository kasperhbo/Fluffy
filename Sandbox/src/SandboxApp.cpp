#include <Fluffy.h>

class Sandbox : public Fluffy::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Fluffy::Application* Fluffy::CreateApplication() {
	return new Sandbox();
}