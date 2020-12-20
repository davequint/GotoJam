#ifndef JUEGO_H
#define JUEGO_H
#include "Escena.h"

class Juego{
private:

    Escena _escena;
    void reset();


    void render();

public:
     Juego();
     ~Juego();

};

#endif // JUEGO_H
