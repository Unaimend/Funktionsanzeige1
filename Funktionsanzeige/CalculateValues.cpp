#include "CalculateValues.h"
#include "iostream"
CalculateValues::CalculateValues()
{
    m_x = 0;
    m_counter = 0;
    m_deltax = 0;
}




void CalculateValues::setcalculateValues(double x, float deltax,int counter)
{
    m_counter = counter;
    m_deltax = deltax;
    m_x = x;
}




void CalculateValues::getcalculateValues()
{
    CalculateValues::calculateFx();
    CalculateValues::calculateFirstDerivative();
}




void CalculateValues::calculateFirstDerivative()
{
    double x = 0;
    double fxold = 0;
    double fxnew = 0;
    double fxderivation = 0;
    
    std::cout << "----------------------------------------------------------" << std::endl;
    
    for(int interncounter = 0; interncounter <=m_counter; ++interncounter)
    {
        std::cout << "Durchgang: " << interncounter << " x: " << x << " f'(x): " << fxderivation  << std::endl;
        xfirstderivativevalues.push_back(x);
        fxfirstderivativevalues.push_back(fxderivation);
        fxold = x * x * x;
        x = x + m_deltax;
        
        fxnew = x * x * x;
        fxderivation = (fxnew - fxold)/m_deltax;
       
        
    }
}




void CalculateValues::calculateFx()
{
    double fx = 0;
    for(int interncounter = 0; interncounter <= m_counter ; interncounter++)
    {   xvalues.push_back(m_x);
        
        fx = m_x * m_x * m_x;
        fxvalues.push_back(fx);
       
        std::cout << "Durchgang: "<< interncounter << " x: "<< m_x <<" f(x): " << fx << std::endl;
        
        m_x = m_x + m_deltax;
       
        
    }
    //Wird friend oder mit getter für die RenderValues-Klasse, die dann die Werte in SFML rendert.
    //Die Rendederfunktion || Rendergetterfunktion(wahrscheinlich eher ne getter wegen kapselung) wird dann in dieser Funktion jedes mal nach dem Berechen aufgerufen.
}