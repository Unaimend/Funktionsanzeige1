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