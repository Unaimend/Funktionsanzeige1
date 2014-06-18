#include <vector>
#include <iostream>

#include "SFML/Graphics.hpp"
#include "CalculateValues.h"
#include "Renderer.h"



//dynamische speicherzuweisung mit button undso und benno anti vektor lösung damit ich mehrer funktionen gleichzeitig anzeigen lassen kann

void Renderer::setRenderValues(CalculateValues &fx)
{
//    static std::vector<double> TESTxvalues = fx.givex();
//    static std::vector<double> TESTfxvalues = fx.givefx();
    this->xvalues  = fx.givex();
    this->fxvalues = fx.givefx();  //WUNDERSCHÖN :)
    this->m_counter = fx.givecounter();
    this->m_deltax = fx.givedeltax();
}

void Renderer::Render()
{   // Wundschgröße
    unsigned int setWidth = 2560;
    unsigned int setHeigth = 1600;
    //Erstellt das Fenster
    sf::RenderWindow window(sf::VideoMode(setWidth, setHeigth), "SFML window");
    sf::Vector2u size = window.getSize();
    
    //aktuelle Auflösung
    unsigned const int width = size.x; // damit Rechen da dies die aktuelle dynamische Auflösung darstellt
    unsigned const int heigth = size.y;
    
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
 
}








































/*
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
}*/