#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "Score.h"

enum ESTADOS_PLAYER {
	QUIETO,
	CAMINANDO_ADELANTE,
	CAMINANDO_ATRAS,
	SALTANDO
};


class Player
{
private:
	sf::Texture _texture;
	sf::IntRect rectSourceSprite;
	sf::Sprite _sprite;
	Score _score;
	int _health;
	ESTADOS_PLAYER _estado;
	float _velocidadSalto;
	sf::Vector2f _prevPosition;
public:
	Player();
	void cmd();
	void update();
	//void render();
	sf::Sprite getDraw();
	float getVelocidadSalto();
	void move(float x, float y);
	void quieto(float x, float y);
	void perderVelocidad();
	sf::Vector2f getPrevPosition();

};


