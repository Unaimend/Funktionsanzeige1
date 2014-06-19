#include <vector>
#include <iostream>

#include "SFML/Graphics.hpp"
#include "CalculateValues.h"
#include "Renderer.h"


//dynamische speicherzuweisung mit button undso und benno anti vektor lösung damit ich mehrer funktionen gleichzeitig anzeigen lassen kann
//Die Lösung um im nachh hinein noch einen hinzuzufügen :) yay noch mehr Funktionen

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
    unsigned  int setWidth = 2560;
    unsigned  int setHeigth = 1600;
    //Erstellt das Fenster
    sf::RenderWindow window(sf::VideoMode(setWidth, setHeigth), "SFML window");
    sf::Vector2u size = window.getSize();
    
    //aktuelle Auflösung
     m_width = size.x; // damit Rechen da dies die aktuelle dynamische Auflösung darstellt
     m_heigth = size.y; //Wichtig damit die x-und y-Were nach her von der Mitte ausgehen.

   
    //Koordinatensystem anzeigen
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
       window.clear(sf::Color(255,255,255,255));
       //Koordinatensystem anzeigen
       Renderer::renderaxis(window);

        // Update the window
        window.display();
    }
 }




void Renderer::renderaxis(sf::RenderWindow &window)
{
    //Erstellt die vertikale(Y-) Achse) an.
    sf::RectangleShape Vertikal;
    Vertikal.setSize(sf::Vector2f(m_width,2));
    Vertikal.setPosition(0, m_heigth/2);
    Vertikal.setFillColor(sf::Color(0,0,0,255));
    
    //Erstellt die horizontale(X-) Achse) an.
    sf::RectangleShape Horizontal;
    Horizontal.setSize(sf::Vector2f(2,m_heigth));
    Horizontal.setPosition(m_width/2+2, 0);
    Horizontal.setFillColor(sf::Color(0,0,0,255));
    
    //Zeichnet die beiden Achsen.
    window.draw(Vertikal);
    window.draw(Horizontal);
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