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
    this->fxfirstderivativevalues = fx.givefirstderivationfx();
    this->xfirstderivativevalues  = fx.givefirstderivationx();
    this->m_counter = fx.givecounter();
    this->m_deltax = fx.givedeltax();

}




void Renderer::Render()
{
    // Wundschgröße
    unsigned  int setWidth = 1680;
    unsigned  int setHeigth = 1602;
    
   
    //Erstellt das Fenster
    sf::RenderWindow window(sf::VideoMode(setWidth, setHeigth), "Funktionsanzeige digga :)");
    window.setFramerateLimit(30);
    sf::Vector2u size = window.getSize();
    std::cout << size.x << size.y;
   
    //aktuelle Auflösung
    m_width = size.x; // damit Rechen da dies die aktuelle dynamische Auflösung darstellt
    m_heigth = size.y; //Wichtig damit die x-und y-Were nach her von der Mitte ausgehen.
    
//------------------------STAMMFUNKTION-------------------------------
    //Erzeuge lokale Kopien der Werte-Vektoren.
    std::vector<double> localcopyx = this->xvalues;
    std::vector<double> localcopyfx = this->fxvalues;
    //Iteratoren für die KoordinatenVekotren.
    std::vector<double>::iterator it;
    std::vector<double>::iterator it2;
    
    //Koordinaten werden mit diesem Punkt dargestellt
    sf::CircleShape values(2);
    values.setFillColor(sf::Color(0,0,153));

//-----------------------1. ABLEITUNG---------------------------
    //Erzeuge lokale Kopien der Werte-Vektoren.
    std::vector<double> firstderivationlocalcopyx = this->xfirstderivativevalues;
    std::vector<double> firstderivationlocalcopyfx = this->fxfirstderivativevalues;
    //Iteratoren für die KoordinatenVekotren.
    std::vector<double>::iterator it3;
    std::vector<double>::iterator it4;
    
    //Koordinaten werden mit diesem Punkt dargestellt
    sf::CircleShape firstderivationvalues(2);
    firstderivationvalues.setFillColor(sf::Color(0,154,153));
    
    
    
    
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
       Renderer::renderfunction(localcopyx, localcopyfx, it, it2, values, window, firstderivationlocalcopyx, firstderivationlocalcopyfx, it3, it4, firstderivationvalues);
       //Renderer::renderfirstderivation(firstderivationlocalcopyx, firstderivationlocalcopyfx, it3, it4, firstderivationvalues, window);
        
       Renderer::renderaxis(window);
       MyButton::instantiateButton(10, m_heigth-225, "Stammfunktion", window, 150,55);
       MyButton::instantiateButton(10, m_heigth-150, "1. Ableitung", window, 150,55);
       MyButton::instantiateButton(10, m_heigth-75, "2. Ableitung", window, 150,55);
      
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




void Renderer::renderfunction(std::vector<double> &localcopyx, std::vector<double> &localcopyfx, std::vector<double>::iterator &it, std::vector<double>::iterator &it2, sf::CircleShape &values, sf::RenderWindow &window, std::vector<double> &firstderivationlocalcopyx, std::vector<double> &firstderivationlocalcopyfx, std::vector<double>::iterator &it3, std::vector<double>::iterator &it4, sf::CircleShape &firstderivationvalue)
{
    it2 = localcopyfx.begin();
    it4 = firstderivationlocalcopyfx.begin();
    if (m_stammanzeigen == true && m_1ablanzeigen == true)
    {
        for (it = localcopyx.begin(); it < localcopyx.end(); it++)
        {
            //std::cout << (*it) << std::endl;
            // (xwerte\ywerte)
            values.setPosition(10*(*it)+m_width/2, -1*(10*(*it2))+m_heigth/2);
            it2++;
            window.draw(values);
        }
        
        
        for (it3 = firstderivationlocalcopyx.begin(); it3 < firstderivationlocalcopyx.end(); it3++)
        {
            firstderivationvalue.setPosition(10*(*it3)+m_width/2, -1*(10*(*it4))+m_heigth/2);
            it4++;
            window.draw(firstderivationvalue);
        }
        

    }
    
    else if (m_stammanzeigen == false && m_1ablanzeigen == true)
    {
        for (it3 = firstderivationlocalcopyx.begin(); it3 < firstderivationlocalcopyx.end(); it3++)
        {
            firstderivationvalue.setPosition(10*(*it3)+m_width/2, -1*(10*(*it4))+m_heigth/2);
            it4++;
            window.draw(firstderivationvalue);
        }

    }
    else if (m_stammanzeigen == true && m_1ablanzeigen == false)
    {
        for (it = localcopyx.begin(); it < localcopyx.end(); it++)
        {
            //std::cout << (*it) << std::endl;
            // (xwerte\ywerte)
            values.setPosition(10*(*it)+m_width/2, -1*(10*(*it2))+m_heigth/2);
            it2++;
            window.draw(values);
        }
    
    }
    else
    {
        window.clear(sf::Color(255,255,255,255));
        
    }
    
    
    *it = 0;
    *it2 =0;
    *it3 = 0;
    *it4 = 0;

}

//FUNKTIONSLEICHE
void Renderer::renderfirstderivation(std::vector<double> &firstderivationlocalcopyx, std::vector<double> &firstderivationlocalcopyfx, std::vector<double>::iterator &it3, std::vector<double>::iterator &it4, sf::CircleShape &firstderivationvalue, sf::RenderWindow &window)
{
    it4 = firstderivationlocalcopyfx.begin();
    if (m_1ablanzeigen == true)
    {
        for (it3 = firstderivationlocalcopyx.begin(); it3 < firstderivationlocalcopyx.end(); it3++)
        {
            firstderivationvalue.setPosition(10*(*it3)+m_width/2, -1*(10*(*it4))+m_heigth/2);
            it4++;
            window.draw(firstderivationvalue);
        }
    }
    
    else
    {
        window.clear(sf::Color(255,255,255,255));
        
    }

    *it3 = 0;
    *it4 = 0;
}























