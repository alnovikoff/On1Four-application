#include <application_layer.h>

namespace Application
{
	void ApplicationLayer::init() override {
		std::cout << "ApplicationLayer init\n";
	}

	void ApplicationLayer::update() override {
		std::cout << "ApplicationLayer update\n";
	}

	void ApplicationLayer::render() override {
		std::cout << "ApplicationLayer render\n";
	}

	void ApplicationLayer::shutdown() override {
		std::cout << "ApplicationLayer shutdown\n";
	}
}