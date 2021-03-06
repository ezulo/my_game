#include "engine/components/Game.h"
#include <iostream>

//int main() {
//  sf::RenderWindow window(sf::VideoMode(800,600), "SFML Works!");
//    sf::CircleShape shape(100.f);
//  shape.setFillColor(sf::Color::Green);
//
//  window.setFramerateLimit(60);
//  while (window.isOpen()) {
//    sf::Event event;
//    while (window.pollEvent(event)) {
//      if (event.type == sf::Event::Closed)
//        window.close();
//    }
//    window.clear();
//    //draw stuff
//    window.draw(shape);
//    window.display();
//  }
//  return 0;
//}

int main(int argc, char* argv[]) {
  Game* main;
  main = new Game();
  main->run();
  std::cout << "Game finished." << endl;
  delete main;
}
