#pragma once
#include <SFML/Graphics.hpp>
enum ESTADOS_PLAYER {
	STILL,
	FORWARD,
	BACKWARD,
	JUMP
};

class Player
{
	private:
		sf::Sprite _sprite;
		sf::Texture _texture;
		ESTADOS_PLAYER _estado;
		int _jumpVelocity;
		int _tools;

	public:
		Player();
		void cmd();
		void update(float );
		void still(float, float);
		sf::Sprite drawSprite();
		void setTools(int );
		int getTools();
};

