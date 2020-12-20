#include "Player.h"
#include<iostream>

Player::Player()
{
	_texture.loadFromFile("Textures/player.png");
	rectSourceSprite.height=300;
	rectSourceSprite.top = 540;
	rectSourceSprite.width = 250;
	rectSourceSprite.left = 250;
	_sprite.setTexture(_texture);
	_sprite.setTextureRect(rectSourceSprite);
	_sprite.setScale(0.3f, 0.3f);
	_estado = ESTADOS_PLAYER::QUIETO;
	_velocidadSalto = 0;
	_score.setScore(0);
	_health = 100;
}

void Player::cmd()
{
	if (_estado == ESTADOS_PLAYER::QUIETO) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
			_estado = ESTADOS_PLAYER::SALTANDO;
			_velocidadSalto = 30;
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			_estado = ESTADOS_PLAYER::CAMINANDO_ADELANTE;
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			_estado = ESTADOS_PLAYER::CAMINANDO_ATRAS;
		}
	}

}

void Player::update()
{
	switch (_estado)
	{
	case QUIETO:
		break;
	case CAMINANDO_ADELANTE:
		move(5, 0);
		_estado = ESTADOS_PLAYER::QUIETO;
		break;
	case CAMINANDO_ATRAS:
		move(-3, 0);
		_estado = ESTADOS_PLAYER::QUIETO;
		break;
	case SALTANDO:
		_velocidadSalto -= 2;
		move(0, -_velocidadSalto);
		break;

	}
	_velocidadSalto -= 2;
	_sprite.move(0, -_velocidadSalto);
}

sf::Sprite Player::getDraw()
{
	return _sprite;
}

void Player::move(float x, float y)
{
	_prevPosition = _sprite.getPosition();
	_sprite.move(x, y);
}

void Player::quieto(float x, float y)
{
	_estado = ESTADOS_PLAYER::QUIETO;
	_velocidadSalto = 0;
	_sprite.setPosition(x, y);
}

float Player::getVelocidadSalto()
{
	return _velocidadSalto;
}

sf::Vector2f Player::getPrevPosition()
{
	return _prevPosition;
}