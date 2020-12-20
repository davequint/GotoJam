#pragma once
#include <SFML/Graphics.hpp>

class Escena{
   private:
    sf::RenderWindow *mWindow;
     sf::Texture _tex_NUbe;
    sf::Texture _tex_City;
    sf::Texture _tex_Vereda;
    sf::Sprite _sc_City;
    sf::Sprite _sc_Nube;
    sf::Sprite _sc_Vereda;
    int dirY;
    int dirX;
    public:
     Escena();
     ~Escena();
        void render(sf::RenderWindow *wnd);
        //void cmd();
        ///void processEvent();
        void update(float);
        void reset(float);
        void setDireccionY(int);
        void setDireccionX(int);
        sf::Sprite &getDrawCity();
        sf::Sprite & getDrawNube();
        sf::Sprite & getDrawVereda();
        //sf::Sprite getSprite();
};
