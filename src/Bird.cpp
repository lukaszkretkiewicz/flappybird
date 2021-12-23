#include "Bird.hpp"
#include <iostream>
Bird::Bird() : shape(sf::Vector2f(20.0f, 20.0f)) {}
sf::RectangleShape Bird::getShape() { return shape; }
void Bird::jump() { std::cout << "jump" << std::endl; }