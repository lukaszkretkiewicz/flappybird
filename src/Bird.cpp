#include "Bird.hpp"
#include <iostream>
Bird::Bird() : shape(sf::Vector2f(width, height)) {
    shape.setOrigin(width/2, height/2);
}
sf::RectangleShape Bird::getShape() { return shape; }

void Bird::jump() {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space)) {
    shape.move(0.0f, -0.5f);
  }
}

// sf::RectangleShape& Bird::operator->(){return &shape;}