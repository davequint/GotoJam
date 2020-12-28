#include<iostream>
#include <SFML/Graphics.hpp>

#include <SFML/Audio.hpp>
#include "Player.h"
#include "Escena .h"
#include "Obstacles.h"
#include "Tool.h"



int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Game: The Includer");
    window.setFramerateLimit(60);
    bool death = false;
    Player p;
    Escena bg;
    Tool hammer;

    ///Obstacles obs;
    sf::Music music;
    bool loop = true;
    music.openFromFile("Audio/GAME_M_THEME.wav");
    music.setVolume(50);
    music.setLoop(loop);
    music.play();


    float tiempo = 0;

    while (window.isOpen())
    {

        tiempo++;

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();
        }

        p.cmd();
        //VALIDACIONES
        //PISO
        if (p.drawSprite().getPosition().y > 500) {
            p.still(p.drawSprite().getPosition().x, 500);
        }
        //COLLISION
        //LEFT
        /*if (p.drawSprite().getGlobalBounds().intersects(obs.drawSprite().getGlobalBounds())) {
            std::cout << "colision";
            death = true;
        }
        if (death)exit(1);*/

        //===================================================
        
        p.update(tiempo);
        bg.update(tiempo);
        hammer.update2();


        //==============HAMMER==============================

        if (((int)tiempo % 4) != 0) {
            hammer.drawSprite().setPosition(sf::Vector2f(1500, 500));
        }
            

        //==============OBSTACULO===========================

        /*if (((int)tiempo % 4) != 0) {
            obs.drawSprite().setPosition(sf::Vector2f(1500, 500));
            obs.drawSprite().setTextureRect(sf::IntRect(0, 0, 254, 254));
            obs.update(1);
        }
        
        if (p.drawSprite().getGlobalBounds().intersects(obs.drawSprite().getGlobalBounds())) {
            obs.update(2);
            // p.quieto(p.getDraw().getPosition().x, ob.getDraw().getGlobalBounds().top - p.getDraw().getGlobalBounds().height);
        }*/


        window.clear();
        // DIBUJAMOS EL FONDO
        //window.draw(p.drawSprite());
        window.draw(bg.getDrawNube());
        window.draw(bg.getDrawCity());
        window.draw(bg.getDrawVereda());

        //DIBUJAMOS EL PERSONAJE
        window.draw(p.drawSprite());
        //DIBUJAMOS EL OBSTACULO
        //window.draw(obs.drawSprite());
        window.draw(hammer.drawSprite());




        window.display();
    }

    return 0;
}