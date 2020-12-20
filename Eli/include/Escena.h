#ifndef ESCENA_H
#define ESCENA_H
class Escena{
   private:
    sf::Texture textura;
    sf::Sprite _scene2;
    float _speed;
    int dirY;
    int dirX;
    public:
     Escena();
     Escena(int, int);
        void render(sf::RenderWindow *wnd);
        void cmd();
        void update(sf::Time deltaTime);
        void reset(float speed);
        void setDireccionY(int);
        void setDireccionX(int);
        sf::Sprite getDraw();
        sf::Sprite getSprite();
};

#endif // ESCENA_H
