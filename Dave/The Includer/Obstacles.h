#pragma once
#include <SFML/Graphics.hpp>


class Obstacles
{
private:
	sf::Sprite spr_obst;
	sf::Texture txt_obst;

public:
	Obstacles();
	void cmd();
	void update( int);
	sf::Sprite drawSprite();
	
};

