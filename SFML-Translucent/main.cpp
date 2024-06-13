#include <SFML/Graphics.hpp>
#include <Windows.h>
#include <Dwmapi.h>

#pragma comment (lib, "Dwmapi.lib")


int main() {
        sf::RenderWindow window(
                sf::VideoMode(1280, 720), "Transparent Window", sf::Style::None);
        window.setFramerateLimit(60);

        MARGINS margins;
        margins.cxLeftWidth = -1;

        SetWindowLong(window.getSystemHandle(), GWL_STYLE, WS_POPUP | WS_VISIBLE);
        DwmExtendFrameIntoClientArea(window.getSystemHandle(), &margins);


        //CircleShape for DemoContent
        sf::CircleShape shape(360.f);
        shape.setFillColor(sf::Color::Green);
        //\

        sf::Vector2i grabbedOffset;
        bool grabbedWindow = false;
        while (window.isOpen())
        {
                sf::Event event;
                while (window.pollEvent(event))
                {
                        if (event.type == sf::Event::Closed || event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
                                window.close();
                        else if (event.type == sf::Event::MouseButtonPressed)
                        {
                                if (event.mouseButton.button == sf::Mouse::Left)
                                {
                                        grabbedOffset = window.getPosition() - sf::Mouse::getPosition();
                                        grabbedWindow = true;
                                }
                        }
                        else if (event.type == sf::Event::MouseButtonReleased)
                        {
                                if (event.mouseButton.button == sf::Mouse::Left)
                                        grabbedWindow = false;
                        }
                        else if (event.type == sf::Event::MouseMoved)
                        {
                                if (grabbedWindow)
                                        window.setPosition(sf::Mouse::getPosition() + grabbedOffset);
                        }
                }

                window.clear(sf::Color::Transparent); //F*ck yeah it works as you would expect from the wording ;P
                window.draw(shape);
                window.display();
        }
        return 0;
}
