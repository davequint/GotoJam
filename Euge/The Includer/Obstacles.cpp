#include "Obstacles.h"
#include <iostream>
Obstacles::Obstacles()
{

	if (!txt_obst.loadFromFile("Textures/obejtos.png"))
	{
		std::cout << "No encontro la imagen" << std::endl;
	}
	txt_obst.setRepeated(true);
	spr_obst.setTexture(txt_obst);
	spr_obst.setTextureRect(sf::IntRect(0, 0, 254, 254));
	spr_obst.setScale(0.5f, 0.5f);
	spr_obst.setOrigin(sf::Vector2f(256 / 2, 256));
	spr_obst.setPosition(sf::Vector2f(1500, 500));
}

void Obstacles::cmd()
{


}

void Obstacles::update(int colision)
{
	spr_obst.move(-2, 0);
	switch(colision) {
		case 1: spr_obst.setTextureRect(sf::IntRect(0, 0, 254, 254)); break;
		case 2:	spr_obst.setTextureRect(sf::IntRect(254, 0, 254, 254)); break;
	}
	spr_obst.setScale(0.5, 0.5);

}

sf::Sprite Obstacles::drawSprite()
{
	return spr_obst;
}
