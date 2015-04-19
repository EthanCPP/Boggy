#include "room.h"

bRoom::bRoom(sf::RenderWindow* window)
{
	m_window = window;
	RM = new bResourceManager();
}

bRoom::~bRoom()
{
	delete m_window;
}

void bRoom::stop()
{
	m_sprites.clear();
	m_sounds.clear();
	m_music.clear();
	m_text.clear();
	m_fonts.clear();
}

void bRoom::pollEvents()
{
	while (m_window->pollEvent(m_event))
	{
		switch (m_event.type)
		{
		case sf::Event::Closed:
			m_window->close();
			break;
		default:
			break;
		}
	}
}

void bRoom::drawSprites()
{
	for (auto spr : m_sprites)
		m_window->draw(m_sprites[spr.first]);
}

void bRoom::drawText()
{
	for (auto txt : m_text)
		m_window->draw(m_text[txt.first]);
}