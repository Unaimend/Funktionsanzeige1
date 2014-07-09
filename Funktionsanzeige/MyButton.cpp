//
//  MyButton.cpp
//  Funktionsanzeige
//
//  Created by Thomas Dost on 19.06.14.
//  Copyright (c) 2014 Thomas Dost. All rights reserved.
//

#include "MyButton.h"
#include "SFML/Graphics.hpp"
void MyButton::instantiateButton(float xpos, float ypos, std::string text, sf::RenderWindow &window,  int buttonwidth,  int buttonheigth)
{   //Button Eigenschaften festlegen
    sf::RectangleShape MyButton;
    MyButton.setSize(sf::Vector2f(buttonwidth,buttonheigth));
    MyButton.setPosition(xpos, ypos);
    MyButton.setFillColor(sf::Color(255,255,255));
    MyButton.setOutlineColor(sf::Color(200,150,100));
    MyButton.setOutlineThickness(7.5);
    MyButton::isClicked(xpos, ypos, buttonwidth, buttonheigth);
    window.draw(MyButton);
    
    //Text des Button
    sf::Text MyText;
    sf::Font MyFont;
    MyFont.loadFromFile("/Users/Thomas/Desktop/Fertige Projekte/Funktionsanzeige/Funktionsanzeige/sansation.ttf");
    MyText.setFont(MyFont);
    MyText.setCharacterSize(20);
    MyText.setPosition(xpos, ypos);
    MyText.setColor(sf::Color(0,0,0));
    MyText.setString(text);
    
    window.draw(MyText);
    
  
}




const bool MyButton::isClicked(float &xpos, float &ypos, int &buttonwidth, int &buttonheigth)
{
    sf::Vector2i MouseVector = sf::Mouse::getPosition();
    double MouseX = MouseVector.x;
    double MouseY = MouseVector.y;
    
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left) || (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))))
    {
        if (((MouseX > 10 && MouseY > 810) && (MouseX < 163 && MouseY < 881)) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left) )
        {
            std::cout << "CLICK STAMMFUNKTION" << std::endl;
            std::cout << MouseX << "  " << MouseY << std::endl;
            if (m_stammanzeigen == true)
            {
                 m_stammanzeigen = false;
            }
            else
            {
                m_stammanzeigen = true;
            }
            
            
        }
        else if (((MouseX > 10 && MouseY > 892) && (MouseX < 163 && MouseY < 956)) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right ))
        {
            std::cout << "CLICK 1ABL" << std::endl;
            std::cout << MouseX << "  " << MouseY << std::endl;
            if (m_1ablanzeigen == true)
            {
                m_1ablanzeigen = false;
            }
            else
            {
                m_1ablanzeigen = true;
            }
            
        }
        else if (((MouseX > 10 && MouseY > 967) && (MouseX < 163 && MouseY < 1028))|| sf::Keyboard::isKeyPressed(sf::Keyboard::Up ))
        {
            std::cout << "CLICK 2ABL" << std::endl;
            std::cout << MouseX << "  " << MouseY << std::endl;
            if (m_2ablanzeigen == true)
            {
                m_2ablanzeigen = false;
            }
            else
            {
                m_2ablanzeigen = true;
            }
            
            
        }
//        else
//        {
//            std::cout << "CLICK" << std::endl;
//            std::cout << MouseX << "  " << MouseY << std::endl;
//        }
        
    }
    
    


    return 0;
}


//&&(MouseX < xpos + buttonwidth && MouseY < ypos + buttonheigth)