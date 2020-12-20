#include <SFML/Graphics.hpp>
#include "pelota.h"

Escena::Escena(){
        sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    sf::Texture textura;

    if(!textura.loadFromFile("images/vege.png")){
        return;}

     _scene2.setTexture(textura);
//     while (window.isOpen()){
//
//        sf::Event event;
//        while (window.pollEvent(event)){
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
      _scene2.setPosition(0, 0);
//    window.clear();
    window.draw(_scene2);
    window.display();
//     }
//   _esfera.setRadius(20.f);
//   _esfera.setFillColor(sf::Color::Magenta);
//   _esfera.setPosition(10, 10);
//   _estado = ESTADOS_PELOTA::QUIETO;
}

// void pelota::cmd(){
// }
sf::Sprite Escena::getDraw(){
  return _scene2;}
//
////sf::CircleShape pelota::getShape(){
////        return _esfera;}
//
//void pelota::update(){
//    sf::Vector2<float> pos = _esfera.getPosition();
//    _esfera .setPosition(pos.x + 0.5f*direccionX, pos.y + 0.5f*direccionY);
//  if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))  pos.x  += 10;
//
//   if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))  pos.x  -= 10;
//
//  if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))  pos.y  -= 10;
//
//    if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))  pos.y  += 10;
//}
//
//void pelota::setDireccionY(int dir){
//   direccionY=dir;}
//void pelota::setDireccionX(int dir){
//   direccionX=dir;}



Escena _escena;
///if(esfera.getShape().getPosition().y+esfera.getShape().getRadius() > 600){
///        esfera.setDireccionY(-1);
//}
///if(esfera.getShape().getPosition().x+esfera.getShape().getRadius() > 800){
//        esfera.setDireccionX(-1);
//}
//    if(esfera.getShape().getPosition().y<0){
//        esfera.setDireccionY(1);
//}
//if(esfera.getShape().getPosition().x<0){
//        esfera.setDireccionX(1);
//}
// imagen.move(x ,y);   ///movemos el sprite



//    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
//    sf::Texture textura;  ///creamos una textura
//    if(!textura.loadFromFile("images/gokuYvegeta.png")){
//        return EXIT_FAILURE;} ///si hay un error salimos
////
//    sf::Sprite imagen;      ///creamos un sprite
//    imagen.setTexture(textura);  ///asignamos la textura
//
//    sf::Texture text;
//    if(!textura.loadFromFile("images/vege.png")){
//               return EXIT_FAILURE;} ///si hay un error salimos
//
//    sf::Sprite img;      ///creamos un sprite
//    img.setTexture(text);
//
//     imagen.setTextureRect (sf::IntRect(20, 20, 300, 300) );  ///Seleccionamos un rectangulo
//
//     sf::Vector2f centro;   ///Cambiamos el origen al centro
//     centro.x = imagen.getTextureRect().width / 2.f ;
//     centro.y = imagen.getTextureRect().height / 2.f ;
//     imagen.setOrigin(centro);
//     imagen.rotate(0);  ///Rotamos la imagen
//float x=0;
//float y=0;
//    while (window.isOpen())
//    {
//        /input
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//          /pr
//    p.cmd();
//    p.update();
//     x+= .1f;
//     y+= .1f;
//     img.setPosition(200, y) ;
//    window.draw(img);
//
//    }
//
//      imagen.setPosition(0, 0);
