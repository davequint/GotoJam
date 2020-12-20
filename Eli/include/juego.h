#ifndef JUEGO_H
#define JUEGO_H
#include "Escena.h"

class Juego{
private:
    sf::RenderWindow *mWindow;
    Escena _escena;
    void reset();
    void processEvent();
    void update(sf::Time deltaTime);
    void render();

public:
     Juego();
     ~Juego();
     void run();
};

#endif // JUEGO_H
