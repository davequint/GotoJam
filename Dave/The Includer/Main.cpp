#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Escena .h"



int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Game: The Includer");
    window.setFramerateLimit(60);
    Player p;
    Escena bg;
    



    float time = 0;

    while (window.isOpen())
    {
        time++;

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        p.cmd();
        //VALIDACION PISO
        if (p.drawSprite().getPosition().y > 500) {
            p.still(p.drawSprite().getPosition().x, 500);
        }
        p.update(time);
        bg.update(time);


        window.clear();
        //DIBUJAMOS EL PERSONAJE
        window.draw(p.drawSprite());
        // DIBUJAMOS EL FONDO
        window.draw(p.drawSprite());
        window.draw(bg.getDrawNube());
        window.draw(bg.getDrawCity());
        window.draw(bg.getDrawVereda());

        window.display();
    }

    return 0;
}