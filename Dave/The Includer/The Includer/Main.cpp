#include <SFML/Graphics.hpp>
#include "Gameplay.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "The Includer #"); window.setFramerateLimit(60);

    Gameplay gp;

    while (window.isOpen())
    {
        //Event Polling
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close(); 
            if (event.type == sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();
        }

        gp.cmd();
        //Update
        gp.update();
        
        
        //Render
        window.clear(sf::Color(150,150,150));//Clear old frame
        // Draw your game here.
        gp.render(window);
        window.display();//Tell app that window is done drawing
    }

    return 0;
}