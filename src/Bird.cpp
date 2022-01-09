#include "Bird.hpp"
#include <iostream>
Bird::Bird() {
  shape.setSize(sf::Vector2f(width, height));
  shape.setOrigin(width / 2, height / 2);
  textures[0].loadFromFile("../data/sprites/yellowbird-upflap.png");
  textures[1].loadFromFile("../data/sprites/yellowbird-midflap.png");
  textures[2].loadFromFile("../data/sprites/yellowbird-downflap.png");
}
sf::RectangleShape Bird::getShape() { return shape; }

void Bird::jump() {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space)) {
    shape.move(0.0f, -0.5f);
  }
}

sf::Texture Bird::getTexture(size_t i) {return textures.at(i);}

template <
std::array<sf::Texture, 3> Bird::getTexture(){

}
// void Bird::update()
// {
//   shape.setTexture(&textures[i]);
// }

// sf::RectangleShape& Bird::operator->(){return &shape;}