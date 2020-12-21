#include "Player.h"
#include <iostream>

Player::Player()
{
    _estado=ESTADOS_PLAYER::STILL;
    
    if (!_texture.loadFromFile("Textures/HastagMan.png"))
    {
        std::cout << "No encontro la imagen" << std::endl;
    }
    _sprite.setTexture(_texture);
    _sprite.setTextureRect(sf::IntRect(1542, 0, 254, 254));
    _sprite.setScale(0.5f, 0.5f);
    _sprite.setOrigin(sf::Vector2f(256 / 2, 256));
    _sprite.setPosition(sf::Vector2f(0, 500));
    _jumpVelocity = 0;
}

void Player::cmd()
{
    if (_estado == ESTADOS_PLAYER::STILL) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            _estado = ESTADOS_PLAYER::FORWARD;
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            _estado = ESTADOS_PLAYER::BACKWARD;
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            _estado = ESTADOS_PLAYER::JUMP;
            _jumpVelocity = 30;
        }
    }
}

void Player::update(float time)
{
    switch (_estado)
    {
    case STILL:
        _sprite.setTextureRect(sf::IntRect(1542, 0, 254, 254));
        break;
    case FORWARD:
        _sprite.move(5, 0);
        _sprite.setTextureRect(sf::IntRect(((int)(time / 5) % 7) * 254, 0, 254, 254));
        _sprite.setScale(0.5, 0.5);
        _estado = ESTADOS_PLAYER::STILL;
        break;
    case BACKWARD:
        _sprite.move(-5, 0);
        _sprite.setTextureRect(sf::IntRect(((int)(time / 5) % 7) * 254, 0, 254, 254));
        _sprite.setScale(-0.5, 0.5);
        _estado = ESTADOS_PLAYER::STILL;
        break;
    case JUMP:
        _jumpVelocity -= 2;
        _sprite.setTextureRect(sf::IntRect(1542, 0, 254, 254));
        _sprite.move(0, -_jumpVelocity);
        break;

    }
}

void Player::still(float x, float y)
{
    
    _estado = ESTADOS_PLAYER::STILL;
    _jumpVelocity = 0;
    _sprite.setPosition(x, y);
}

sf::Sprite Player::drawSprite()
{
    return _sprite;
}


