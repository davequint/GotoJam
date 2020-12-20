#ifndef PELOTA_H
#define PELOTA_H

class scene{
    private:

    float direccionY;
    float direccionX;
    public:
    scene();
    ~scene();
        void cmd();
        void update();
         void reset(float);
        void setDireccionY(int);
        void setDireccionX(int);
        void  render(sf::RenderWindow *);
        sf::Sprite& getDraw();
        sf::Sprite getSprite();

};

#endif // PELOTA_H
