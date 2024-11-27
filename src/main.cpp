#include <SFML/Graphics.hpp>

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Top-Down Shooter");

    // Create a circle (just as a placeholder for the player)
    sf::CircleShape player(50);
    player.setFillColor(sf::Color::Green);
    player.setPosition(375, 275); // Center the player on the screen

    // Game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the screen and draw the player
        window.clear();
        window.draw(player);
        window.display();
    }

    return 0;
}
