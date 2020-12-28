#include "Tool.h"
#include <iostream>

Tool::Tool()
{
    if (!_texture.loadFromFile("Textures/smallhammer.png"))
    {
        std::cout << "No encontro la imagen" << std::endl;
    }
    _sprite.setTexture(_texture);
    _sprite.setTextureRect(sf::IntRect(0, 0, 16, 16));
    _sprite.setOrigin(sf::Vector2f(8, 8));
    _sprite.setScale(3, 3);
    _sprite.setPosition(sf::Vector2f(1500, 300));
    _velocity = 5;
}

sf::Sprite Tool::drawSprite()
{
	return _sprite;
}

int Tool::getVelocity()
{
    return _velocity;
}

void Tool::update2() {
    _sprite.setPosition(_sprite.getPosition().x - getVelocity() , 300);
}
