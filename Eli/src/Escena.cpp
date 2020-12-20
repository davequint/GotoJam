#include <SFML/Graphics.hpp>
#include "Escena.h"
Escena::Escena(){
     textura.loadFromFile("../images/vege.png");
    _scene2.setTexture(textura);
}
//Escena::Escena(int _dirX, int _dirY){
//       textura.loadFromFile("images/ciudad1.png");
//    _scene2.setTexture(textura);
//     _scene2.rotate(180);
//     dirX=_dirX;
//     dirY=_dirY;
//     }
void  Escena::render(sf::RenderWindow *wnd){
    wnd->draw(_scene2);
    }
 void Escena::reset(float speed){
     srand(time(NULL));
     int num= rand();

     _speed =0.01f;
     _scene2.setPosition(num%dirX, dirY);
 }
 void Escena::update(sf::Time deltaTime){
 _scene2.move(0.0f, _speed*deltaTime.asSeconds());
    if(_scene2.getPosition().y>600){
        reset(_speed) ;
    }  }

sf::Sprite Escena::getDraw(){
  return _scene2;}


