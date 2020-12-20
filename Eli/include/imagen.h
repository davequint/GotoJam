#ifndef PELOTA_H
#define PELOTA_H

class scene{
    private:
    sf::Sprite _scene;
//    float direccionY=1;
//    float direccionX=1;
    public:
    scene();
    ~scene();
        void cmd();
        void update();
        void setDireccionY(int);
        void setDireccionX(int);
        sf::Sprite& getDraw();
        sf::Sprite getSprite();

};

#endif // PELOTA_H
