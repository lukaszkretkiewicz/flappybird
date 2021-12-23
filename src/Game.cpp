#include "Game.hpp"

Game::Game(std::unique_ptr<Bird> bird) : bird(std::move(bird)) {
  window.setFramerateLimit(60);

}

void Game::run() {
   bird->shape.setPosition(window.getSize().x / 2, window.getSize().y / 2);
  while (window.isOpen()) {
    sf::Event evnt;

    handleEvents(evnt);
    bird->jump();
    updateWindow();
  }
}

void Game::updateWindow() {
  window.clear();
  window.draw(bird->getShape());
  window.display();
}

void Game::handleEvents(sf::Event evnt) {
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

    default:
      break;
    }
  }
}