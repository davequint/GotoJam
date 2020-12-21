#pragma once
#include <SFML/Graphics.hpp>

class Escena {
private:
	sf::RenderWindow* mWindow;
	sf::Texture _tex_NUbe;
	sf::Texture _tex_City;
	sf::Texture _tex_Vereda;
	sf::Sprite _sc_City;
	sf::Sprite _sc_Nube;
	sf::Sprite _sc_Vereda;
	
public:
	Escena();
	~Escena();
	void render(sf::RenderWindow* wnd);
	void update(float);
	void reset(float);
	sf::Sprite& getDrawCity();
	sf::Sprite& getDrawNube();
	sf::Sprite& getDrawVereda();
};
