#include <SFML/Graphics.hpp>

using namespace sf;

int main() {
    Event event;

    VideoMode vm(1920,1080);

    RenderWindow window(vm, "Timber!!!");

    Texture textureBackground;
    textureBackground.loadFromFile("graphics/background.png");

    Sprite spriteBackground;
    spriteBackground.setTexture(textureBackground);
    spriteBackground.setPosition(0,0);

    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        window.draw(spriteBackground);
        window.display();
    }

    return 0;
}