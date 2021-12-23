#pragma once
#include "SFML/Graphics.hpp"

class Bird {
public:
  sf::RectangleShape shape;

  Bird();
  void jump();
  sf::RectangleShape getShape();

private:
  float width = 20;
  float height = 20;
};