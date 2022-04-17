#include "Platform.hpp"

Platform::Platform()
{
    window = new Window(&running);
    
    triangle = new Triangle(100);

    while(running)
    {
	update();
	render();
	sync();
    }
}

void Platform::update()
{
    triangle->rotate(1);
}

void Platform::render()
{
    window->update(triangle);
}

void Platform::sync()
{
    window->wait();
}
