#ifndef PELOTA_H
#define PELOTA_H

//    enum ESTADOS_PELOTA{
//    QUIETO,
//    CAMINANDO_ADELANTE,
//    CAMINANDO_ATRAS,
//    SALTANDO};

class Escena{
    private:
    sf::Sprite _scene2;
   /// ESTADOS_PELOTA _estado;
//    float direcY=1;
//    float direcX=1;
    public:
        Escena();
        void cmd();
        void update();
        void setDireccionY(int);
        void setDireccionX(int);
        sf::Sprite getDraw();
        sf::Sprite getSprite();
};

#endif // PELOTA_H
