#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "def.hpp"

#include <SFML/Graphics.hpp>

class Triangle
{
    int size;

    sf::CircleShape* shape;

    public:

        Triangle(int size);

	void rotate(int degree);

	sf::CircleShape* getEntity();
};

#endif
