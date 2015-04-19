#include "controller/controller.h"

int main()
{
	sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode(960, 540), "Boggy Game Engine", sf::Style::Close);
	window->setFramerateLimit(60);

	bController* controller = new bController(window);
	controller->start();

	return 0;
}