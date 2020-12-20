
#include "Gameplay.h"
#include <iostream>




Gameplay::Gameplay()
{
    
    Player p;
    Escena b;
    /*obs[0].getDraw().setPosition(500, 450);
    obs[0].getDraw().setPosition(500, 350);*/
}

void Gameplay::cmd()
{
    p.cmd();

}

void Gameplay::update()
{
    p.update();
    b.update();

    if (p.getDraw().getPosition().y > 300) {
        p.quieto(p.getDraw().getPosition().x, 300);
    }


    //collisionCheck();

}

void Gameplay::render(sf::RenderWindow& window)
{
    window.draw(p.getDraw());
    
}
/*
void Gameplay::collisionCheck()
{
    //for (auto ob : obs){
        if (p.getPrevPosition().y + p.getDraw().getGlobalBounds().height < ob.getDraw().getGlobalBounds().top
            &&p.getDraw().getGlobalBounds().intersects(ob.getDraw().getGlobalBounds())
            && p.getVelocidadSalto() <0) {
            std::cout << "Colisiono" << std::endl;
            p.quieto(p.getDraw().getPosition().x, ob.getDraw().getGlobalBounds().top - p.getDraw().getGlobalBounds().height);
        }
    //}
}*/
