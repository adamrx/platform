#include "Triangle.hpp"

Triangle::Triangle(int size)
{
    shape = new sf::CircleShape(size, 3);

    shape->setPosition(X_CENTER, Y_CENTER);

    shape->setOrigin(size, size);
}

void Triangle::rotate(int degree)
{
    shape->rotate(degree);
}

sf::CircleShape* Triangle::getEntity()
{
    return shape;
}
