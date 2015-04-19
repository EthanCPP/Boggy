#pragma once
#include "../stdafx.h"
#include "../resource/resourcemanager.h"

class bRoom
{
public:
	bRoom(sf::RenderWindow* window);
	~bRoom();

	virtual void stop();
protected:
	sf::RenderWindow* m_window;
	sf::Event m_event;
	float m_deltaTime;

	bResourceManager* RM;
protected:
	virtual void pollEvents();
	virtual void drawSprites();
	virtual void drawText();

	std::map<std::string, sf::Sprite> m_sprites;
	std::map<std::string, sf::Sound> m_sounds;
	std::map<std::string, sf::Music> m_music;
	std::map<std::string, sf::Text> m_text;
	std::map<std::string, sf::Font> m_fonts;
};