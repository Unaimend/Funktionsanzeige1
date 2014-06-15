#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>



#include "CalculateFirstDerivative.h"
#include "CalculateFxValues.hpp"
//Subklasse die beies zusammenfasst fehlt noch, also die von beiden erbt, von dieser Klasse werde ich wahrscheinlich auch das Übergen der Renderwerte Regeln lassen
int main(int, char const**)
{
    double x = 0;
    int counter = 200;
    float deltax = 0.1;
    
    CalculateValues fx1;
    fx1.setcalculateValues(x, deltax, counter);
    fx1.getcalculateValues();
   
    CalculateFxValues fx2;
    fx2.setcalculateValues(x, deltax, counter);
    fx2.getcalculateValues();
    
    CalculateFirstDerivative fx3;
    fx3.setcalculateValues(x, deltax, counter);
    fx3.getcalculateValues();

    return EXIT_SUCCESS;
}


























//// Create the main window
//sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
//while (window.isOpen())
//{
//    // Process events
//    sf::Event event;
//    while (window.pollEvent(event))
//    {
//        // Close window : exit
//        if (event.type == sf::Event::Closed) {
//            window.close();
//        }
//        
//        // Espace pressed : exit
//        if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
//            window.close();
//        }
//    }
//    
//    // Clear screen
//    window.clear();
//    // Update the window
//    window.display();
//}

