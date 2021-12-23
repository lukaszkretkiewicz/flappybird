#include "Game.hpp"

Game::Game(std::unique_ptr<Bird> bird) : bird(std::move(bird)) {}

void Game::run() {

  window.setFramerateLimit(60);

  while (window.isOpen()) {
    sf::Event evnt;
    while (window.pollEvent(evnt)) {
      switch (evnt.type) {
      case sf::Event::Closed:
        window.close();
        break;
      case sf::Event::TextEntered:
        if (evnt.text.unicode < 128) {
          printf("%c", evnt.text.unicode);
        }
        break;
      case sf::Event::KeyPressed:
        bird->jump();
        break;
      default:
        break;
      }
    }
    window.clear();
    window.draw(bird->getShape());
    window.display();
  }
}