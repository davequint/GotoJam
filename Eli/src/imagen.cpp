#include <SFML/Graphics.hpp>
#include "imagen.h"
scene::scene(){
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    sf::Texture textura;  ///creamos una textura

    if(!textura.loadFromFile("images/vege.png")){
        return;} ///si hay un error salimos

     _scene.setTexture(textura);
     while (window.isOpen()){

        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }
      _scene.setPosition(0, 0);
    window.clear();
    window.draw(_scene);
    window.display();
}
}

scene::~scene(){
}
//   _imagen.setFillColor(sf::Color::Magenta);
//   _imagen.setPosition(10, 10);

 void scene::cmd(){
 }
 sf::Sprite& scene::getDraw(){
      return _scene;
    }

void scene::update(){
}

//void scene::setDireccionY(int dir){
//   direccionY=dir;}
//void scene::setDireccionX(int dir){
//   direccionX=dir;}

//    sf::Vector2<float> pos = _esfera.getPosition();
//    _esfera .setPosition(pos.x + 0.5f*direccionX, pos.y + 0.5f*direccionY);
//  if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))  pos.x  += 10;
//
//   if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))  pos.x  -= 10;
//
//  if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))  pos.y  -= 10;
//
//    if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))  pos.y  += 10;
