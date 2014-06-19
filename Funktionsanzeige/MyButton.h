//
//  MyButton.h
//  Funktionsanzeige
//
//  Created by Thomas Dost on 19.06.14.
//  Copyright (c) 2014 Thomas Dost. All rights reserved.
//

#ifndef __Funktionsanzeige__MyButton__
#define __Funktionsanzeige__MyButton__
class Renderer;
#include <iostream>
#include "SFML/Graphics.hpp"
class MyButton
{
    friend Renderer;
public:
    //--------Functions------
    void instantiateButton(float xpos, float ypos, std::string text, sf::RenderWindow &window,int buttonwidth,int buttonheigth);
    const bool isClicked(float &xpos, float &ypos, int &buttonwidth, int &buttonheigth);
    //--------Variables------
protected:
    bool m_stammanzeigen = true;
    bool m_1ablanzeigen = true;
    bool m_2ablanzeigen = true;


};

#endif /* defined(__Funktionsanzeige__MyButton__) */
