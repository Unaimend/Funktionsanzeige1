
//
// Disclamer:
// ----------
//
// This code will work only if you selected window, graphics and audio.
//
// Note that the "Run Script" build phase will copy the required frameworks
// or dylibs to your application bundle so you can execute it on any OS X
// computer.
//
// Your resource files (images, sounds, fonts, ...) are also copied to your
// application bundle. To get the path to these resource, use the helper
// method resourcePath() from ResourcePath.hpp
//

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include "CalculateFxValues.hpp"
#include "/Users/Thomas/Desktop/Funktionsanzeige/Funktionsanzeige/CalculateFirstDerivative.h"
//Subklasse die beies zusammenfasst fehlt noch, also die von beiden erbt, von dieser Klasse werde ich wahrscheinlich auch das Übergen der Renderwerte Regeln lassen
int main(int, char const**)
{   double x = 0;
    int counter = 20;
    float deltax = 0.1;
    CalculateFxValues fx1;
    CalculateFirstDerivative fx2;
    
    fx1.setcalculateValues(x, counter, deltax);
    fx1.getcalculateValues();
    
    fx2.setcalculateValues(x, deltax, counter);
    fx2.getcalculateValues();
    
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Espace pressed : exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }

        // Clear screen
        window.clear();
        // Update the window
        window.display();
    }
    
    return EXIT_SUCCESS;
}
