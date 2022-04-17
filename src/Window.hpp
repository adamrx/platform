#include "def.hpp"

#include <SFML/Graphics.hpp>
#include <unistd.h>

#include "Triangle.hpp"

class Window
{
    sf::RenderWindow* hwindow;

    bool* running;

    public:
    
        Window(bool* _running);

	void update(Triangle* triangle);

	void wait();
};
