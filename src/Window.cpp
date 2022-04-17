#include "Window.hpp"

Window::Window(bool* _running)
{
    int style = sf::Style::Titlebar | sf::Style::Close;

    hwindow = new sf::RenderWindow(sf::VideoMode(X_SIZE, Y_SIZE), TITLE, style);

    hwindow->setVerticalSyncEnabled(true);

    running = _running;
}

void Window::update(Triangle* triangle)
{
    sf::Event event;

    while(hwindow->pollEvent(event))
    if(event.type == sf::Event::Closed) *running = false;

    hwindow->clear();
    hwindow->draw(*triangle->getEntity());
    hwindow->display();
}

void Window::wait()
{
    usleep(16000);
}
