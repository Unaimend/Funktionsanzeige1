
//  CalculateFxValues.cpp
//  Funktionsanzeige
//
//  Created by Thomas Dost on 15.06.14.
//  Copyright (c) 2014 Thomas Dost. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "CalculateFxValues.hpp"
CalculateFxValues::CalculateFxValues()
{
    m_x = 0;
    m_counter = 0;
    m_deltax = 0;
}




CalculateFxValues::~CalculateFxValues()
{
}




void CalculateFxValues::setcalculateValues(double x, int counter, float deltax)
{
    m_counter = counter;
    m_x =x;
    m_deltax = deltax;
    //CalculateFxValues::calculateValues();
}




void CalculateFxValues::getcalculateValues() { CalculateFxValues::calculateValues(); }






void CalculateFxValues::calculateValues()
{
    double fx = 0;
    for(int interncounter = 0; interncounter <= m_counter ; interncounter++)
    {
    
        fx = m_x * m_x;
        std::cout << "Durchgang: "<< interncounter << " x: "<< m_x <<" f(x): " << fx << std::endl;
        
        m_x = m_x + m_deltax;
    
    }
    //Wird friend oder mit getter für die RenderValues-Klasse, die dann die Werte in SFML rendert.
    //Die Rendederfunktion || Rendergetterfunktion(wahrscheinlich eher ne getter wegen kapselung) wird dann in dieser Funktion jedes mal nach dem Berechen aufgerufen.
}