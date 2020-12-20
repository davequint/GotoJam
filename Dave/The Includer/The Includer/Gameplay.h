#pragma once
#include "Player.h"
#include "Escena.h"

class Gameplay
{
private:
	Player p;
	Escena b;
	
public:
	Gameplay();
	void cmd();
	void update();
	void render(sf::RenderWindow&);
	//void collisionCheck();
};