#include <SFML/Graphics.hpp>
#include "Escena.h"
Escena::Escena(){
     mWindow =  new sf::RenderWindow(sf::VideoMode(800, 600), "Elizabeth ");
     _tex_NUbe.loadFromFile("images/cieloNublado.png");
     _tex_NUbe.setRepeated(true);
     _sc_Nube.setTexture(_tex_NUbe);
     _sc_Nube.setTextureRect(sf::IntRect(0, 0, 800, 395));
    _sc_Nube.setPosition(sf::Vector2f(0, 0));

       _tex_City.loadFromFile("images/ciudad1.png");
       _tex_City.setRepeated(true);
    _sc_City.setTexture(_tex_City);
    _sc_City.setTextureRect(sf::IntRect(0, 0, 800, 395));
    _sc_City.setPosition(sf::Vector2f(0, 50));


    _tex_Vereda.loadFromFile("images/desierto.png");
      _tex_Vereda.setRepeated(true);
     _sc_Vereda.setTexture( _tex_Vereda);
     _sc_Vereda.setTextureRect(sf::IntRect(0, 0, 800, 392));
//     _sc_Vereda.setOrigin(sf::Vector2f(300/2,300/2));
    _sc_Vereda.setPosition(sf::Vector2f(0, 835));
     run();
     }
void Escena::processEvent(){
    sf::Event event;
    while (mWindow->pollEvent(event)){
            if (event.type == sf::Event::Closed){
                mWindow->close();
            }
        }
}
void Escena::run(){
        float time;

    while(mWindow->isOpen()){
        processEvent();
        time ++;

        render(mWindow);
        reset(time);
    }
}
void  Escena::render(sf::RenderWindow *wnd){
    mWindow->clear();
    wnd->draw(_sc_Nube);
   wnd->draw(_sc_City);
   wnd->draw(_sc_Vereda);
    mWindow->display();
    }
 void Escena::reset(float time){
     _sc_Vereda.setTextureRect(sf::IntRect(time/6, 0, 800, 395));
    _sc_Vereda.setScale(1, -1);

     _sc_City.setTextureRect(sf::IntRect(time/40, 0, 800, 392));
    _sc_City.setScale(2, 1);

     _sc_Nube.setTextureRect(sf::IntRect(time/6 , 0, 800, 395));
    _sc_Nube.setScale(1, 1);

 }


void Escena::setDireccionX(int dir){
   dirX=dir;}
void Escena::setDireccionY(int dir){
   dirY=dir;}
sf::Sprite & Escena::getDrawCity(){
  return _sc_City;}
Escena::~Escena(){
 delete mWindow;}
 sf::Sprite & Escena::getDrawNube(){
      return _sc_Nube;
    }sf::Sprite & Escena::getDrawVereda(){
      return _sc_Vereda;
    }
