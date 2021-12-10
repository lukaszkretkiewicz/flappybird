//
// Created by Lukasz on 27.11.2021.
//

#include "Game.hpp"

// Game::Game(std::unique_ptr <sf::RenderWindow>) {
// }

void Game::run() {

  while (window.isOpen()) {
    sf::Event evnt;
    while (window.pollEvent(evnt)) {
      if (evnt.type == evnt.Closed)
        window.close();
    }
  }
}