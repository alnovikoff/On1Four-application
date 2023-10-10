#ifndef APPLICATION_LAYER_H
#define APPLICATION_LAYER_H

#include <engine/of_pch.h>

namespace Application
{
	class ApplicationLayer : public O1F4Engine::Layer
	{
		ApplicationLayer() : Layer("ApplicationLayer") {}

		void init() override;
		void update() override;
		void render() override;
		void shutdown() override;
	};
}
#endif