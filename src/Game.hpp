#pragma once
#include "Bird.hpp"
#include <SFML/Graphics.hpp>

class Game {
public:
  Game(std::unique_ptr<Bird> = std::make_unique<Bird>());
  void run();

private:
  sf::RenderWindow window{sf::VideoMode(288, 512), "Flappy Bird",
                          sf::Style::Default};
  std::unique_ptr<Bird> bird;

  void updateWindow();

  void handleEvents(sf::Event);
};
