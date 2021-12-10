//
// Created by Lukasz on 27.11.2021.
//

#include <SFML/Graphics.hpp>

class Game {
public:
  //    Game(std::unique_ptr<sf::RenderWindow> =
  //    std::make_unique<sf::RenderWindow>(sf::VideoMode(288, 512),
  //                                                                                "Flappy Bird", sf::Style::Default));

  void run();

private:
  sf::RenderWindow window{sf::VideoMode(288, 512), "Flappy Bird",
                          sf::Style::Default};
  //    std::unique_ptr <sf::RenderWindow> window;
};
