#pragma once
#include "Element.h"
#include <SFML/Graphics.hpp>
class Tool :public Element
{
private:
    sf::Texture _texture;
    sf::Sprite _sprite;
    int _velocity;
public:
    Tool();
    sf::Sprite drawSprite();
    int getVelocity();

    void update2();

};

