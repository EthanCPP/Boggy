#pragma once
#include "../room.h"

class rMenu : public bRoom
{
public:
	rMenu(sf::RenderWindow* window);
	~rMenu();

	void start();
	void update(float deltaTime);
	void render();

	std::string message;
private:
	sf::Music music;
};