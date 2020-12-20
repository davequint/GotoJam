#ifndef ESCENA_H
#define ESCENA_H
class Escena{
   private:
    sf::RenderWindow *mWindow;
     sf::Texture _tex_NUbe;
    sf::Texture _tex_City;
    sf::Texture _tex_Desert;
    sf::Sprite _sc_City;
    sf::Sprite _sc_Nube;
    sf::Sprite _sc_Desert;
    float _speed;
    int dirY;
    int dirX;
    public:
     Escena();
     ~Escena();
        void render(sf::RenderWindow *wnd);
        void cmd();
         void processEvent();
        void run();
        void update(sf::Time deltaTime);
        void reset(float);
        void setDireccionY(int);
        void setDireccionX(int);
        sf::Sprite &getDrawCity();
        sf::Sprite & getDrawNube();
        sf::Sprite & getDrawDesert();
        sf::Sprite getSprite();
};

#endif // ESCENA_H
