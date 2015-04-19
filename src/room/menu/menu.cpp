#include "menu.h"

rMenu::rMenu(sf::RenderWindow* window)
	: bRoom(window)
{

}

rMenu::~rMenu()
{

}

void rMenu::start()
{
	RM->loadTexture("background", "res/img/menu.png");
	m_sprites["background"] = RM->createSprite("background");

	music.openFromFile("res/music/Hyperfun.ogg");
	music.setLoop(true);
	music.play();
}

void rMenu::update(float deltaTime)
{
	pollEvents();
	m_deltaTime = deltaTime;
}

void rMenu::render()
{
	m_window->clear();

	drawSprites();

	m_window->display();
}