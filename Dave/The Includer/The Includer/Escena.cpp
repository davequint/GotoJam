#include <SFML/Graphics.hpp>
#include "Escena.h"
Escena::Escena(int _dirX = 0, int _dirY = 0) {
    setSpeed(0.01);
    mWindow = new sf::RenderWindow(sf::VideoMode(800, 600), "Elizabeth ");
    textura.loadFromFile("images/ciudad1.png");
    _scene2.setTexture(textura);
    dirX = _dirX;
    dirY = _dirY;
}
void Escena::processEvent() {
    sf::Event event;
    while (mWindow->pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            mWindow->close();
        }
    }
}
void Escena::run() {
    sf::Clock clock;
    while (mWindow->isOpen()) {
        sf::Time deltaTime = clock.restart();
        processEvent();
        render(mWindow);
    }
}
void  Escena::render(sf::RenderWindow* wnd) {
    mWindow->clear();
    wnd->draw(_scene2);
    mWindow->display();
}
void Escena::reset(float speed) {
    srand(time(NULL));
    int num = rand();

    _speed = speed;
    _scene2.setPosition(num % dirX, dirY);
}
void Escena::update(sf::Time deltaTime) {
    _scene2.move(0.0f, _speed * deltaTime.asSeconds());
    if (_scene2.getPosition().y > 600) {
        reset(_speed);
    }
}

sf::Sprite Escena::getDraw() {
    return _scene2;
}
void Escena::setSpeed(float s)
{
    _speed = s;
}
Escena::~Escena() {
    delete mWindow;
}

