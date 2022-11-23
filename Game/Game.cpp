#include "Game.hpp"

Game::Game(){
    initVariables();
    gameInit();
    gameLoop();
}

void Game::initVariables() {
    this->window = nullptr;
}

void Game::gameInit(){

       
    this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "Pokemon");
    this->shape.setRadius(100.f);
    this->shape.setFillColor(sf::Color::Green);
}

// void Game::gameRender(){
    
// }

void Game::gameLoop(){
    
    while (this->window->isOpen())
    {
       
        while (this->window->pollEvent(this->event))
        {
            if (this->event.type == sf::Event::Closed)
                this->window->close();
        }
        this->window->clear();
        this->window->draw(this->shape);
        this->window->display();
    }
}