#include <SFML/Graphics.hpp>

class Escena {
private:
    sf::RenderWindow* mWindow;
    sf::Texture textura;
    sf::Sprite _scene2;
    float _speed;
    int dirY;
    int dirX;
public:
    Escena();
    ~Escena();
    Escena(int, int);
    void render(sf::RenderWindow* wnd);
    void cmd();
    void processEvent();
    void run();
    void update(sf::Time deltaTime);
    void reset(float speed);
    void setDireccionY(int);
    void setDireccionX(int);
    sf::Sprite getDraw();
    sf::Sprite getSprite();
    void setSpeed(float );
};