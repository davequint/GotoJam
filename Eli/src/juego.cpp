#include <SFML/Graphics.hpp>
#include "juego.h"
#include "Escena.h"

Juego::Juego(){

   mWindow =  new sf::RenderWindow(sf::VideoMode(800, 600), "Elizabeth ");
    _escena.getDraw();

}
void Juego::processEvent(){
    sf::Event event;
    while (mWindow->pollEvent(event)){
            if (event.type == sf::Event::Closed){
                mWindow->close();
            }
        }
}
void Juego::render(){
 mWindow->clear();
    mWindow->display();
}
void Juego::run(){
    sf::Clock clock;
    while(mWindow->isOpen()){
       // sf::Time deltaTime = clock.restart();
        processEvent();
        render();
    }
}
Juego::~Juego(){
 delete mWindow;}
