#pragma once
#include "../stdafx.h"
#include "gamestate.h"

#include "../room/menu/menu.h"

class bController
{
public:
	bController(sf::RenderWindow* window);
	~bController();

	void start();
private:
	GameState GS;
	sf::RenderWindow* bWindow;
	sf::Clock m_deltaClock;
	float bDeltaTime;

	void step();
private:
	rMenu* r_menu;
};