#include <iostream>

#include "CalculateFirstDerivative.h"

CalculateFirstDerivative::CalculateFirstDerivative()
{
    m_counter = 0;
    m_x = 0;
    m_deltax = 0;
}




CalculateFirstDerivative::~CalculateFirstDerivative()
{
}




void CalculateFirstDerivative::getcalculateValues(){ CalculateFirstDerivative::calculateValues(); }




void CalculateFirstDerivative::calculateValues()
{
    double x = m_x;
    double fxold = 0;
    double fxnew = 0;
    double fxderivation = 0;
    fxold = x * x;
    std::cout << "----------------------------------------------------------" << std::endl;

    for(int interncounter = 0; interncounter <=m_counter; interncounter++)
    {
        std::cout << "Durchgang: " << interncounter << " x: " << x << " f'(x): " << fxderivation  << std::endl;
        x = x + m_deltax;
        fxnew = x * x;
        fxderivation = (fxnew - fxold)/m_deltax;
        
    }
}