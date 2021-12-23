#pragma once
#include "SFML/Graphics.hpp"

class Bird {
public:
  Bird();
  void jump();
  sf::RectangleShape getShape();

private:
  sf::RectangleShape shape;
};