#include "controller.h"

bController::bController(sf::RenderWindow* window)
{
	bWindow = window;

	r_menu = new rMenu(window);
	r_menu->start();
}

bController::~bController()
{
	delete bWindow;
}

void bController::start()
{
	while (bWindow->isOpen())
	{
		step();
	}
}

void bController::step()
{
	bDeltaTime = (float)m_deltaClock.restart().asMilliseconds();

	switch (GS)
	{
	case GameState::MENU:
		r_menu->update(bDeltaTime);
		r_menu->render();
		break;
	default:
		bWindow->close();
	}
}