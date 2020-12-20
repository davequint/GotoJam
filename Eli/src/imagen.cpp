#include <SFML/Graphics.hpp>
#include "imagen.h"
#include "Escena.h"
scene::scene(){

}
void scene::reset(float time){

 }

scene::~scene(){
}

 void scene::cmd(){
 }


void scene::update(){
}

void scene::setDireccionY(int dir){
   direccionY=dir;}
void scene::setDireccionX(int dir){
   direccionX=dir;}

//    sf::Vector2<float> pos = _esfera.getPosition();
//    _esfera .setPosition(pos.x + 0.5f*direccionX, pos.y + 0.5f*direccionY);
//  if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))  pos.x  += 10;
//
//   if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))  pos.x  -= 10;
//
//  if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))  pos.y  -= 10;
//
//    if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))  pos.y  += 10;
