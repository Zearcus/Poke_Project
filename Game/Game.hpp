#pragma one
#include "../General/General.hpp"


class Game{

public:

//COnstructuor
Game();

//Functions
//void gameRender();

void gameLoop();

private:
// Variables
    // window
    sf::RenderWindow* window;
    // shape
    sf::CircleShape shape;
    // Event
    sf::Event event;

    // functions
    void initVariables();
    void gameInit();
};