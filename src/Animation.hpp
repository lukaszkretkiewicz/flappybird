#pragma once
#include <SFML/Graphics.hpp>

using Time = float;

class Animation {
public:
  Animation(std::array<sf::Texture> &texture, Time switchTime, Time totalTime)
      : texture(texture), totalTime(totalTime), switchTime(switchTime) {}

  auto update(Time deltaTime) {
    totalTime += deltaTime;
    if (totalTime >= switchTime) {
      totalTime -= switchTime;
    }
    return sf::IntRect() 
  }

private:
  // Time deltaTime{};
  sf::Texture &texture;
  Time totalTime{};
  Time switchTime{};
};