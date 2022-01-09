#pragma once
#include "SFML/Graphics.hpp"

class Bird {
public:
  sf::RectangleShape shape;

  Bird();
  void jump();
  sf::RectangleShape getShape();

  sf::Texture getTexture(size_t);
  std::array<sf::Texture, 3> getTexture();
  
private:
  const float width = 20.0f;
  const float height = 20.0f;
  std::array<sf::Texture, 3> textures;
};