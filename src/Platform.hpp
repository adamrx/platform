#include <SFML/Window.hpp>

#include "Window.hpp"
#include "Triangle.hpp"

class Platform
{
    Window* window;

    Triangle* triangle;

    bool running;

    public:

	Platform();    

	void update();
	void render();
	void sync();
};
