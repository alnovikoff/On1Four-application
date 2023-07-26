#include <iostream>
#include <engine.h>
#include <glm/glm.hpp>
#include <service_locator.h>

int main(int argc, char **argv)
{
  std::cout << "HEllo from sandbox" << std::endl;
  On1FourEngine::Init();

  ServiceLocator::GetWindow()->OpenWindow();

  while(!ServiceLocator::GetWindow()->Update())
  {

  }

  return 0;
}