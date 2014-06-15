//
//   CalculateFirstDerivative.cpp
//  Funktionsanzeige
//
//  Created by Thomas Dost on 15.06.14.
//  Copyright (c) 2014 Thomas Dost. All rights reserved.
//

#include "CalculateFirstDerivative.h"
#include <iostream>
CalculateFirstDerivative::CalculateFirstDerivative()
{
    m_counter = 0;
    m_x = 0;
    m_deltax = 0;
}




CalculateFirstDerivative::~CalculateFirstDerivative()
{
}




void CalculateFirstDerivative::setcalculateValues(double x, float deltax,int counter)
{
    m_counter = counter;
    m_deltax = deltax;
    m_x = x;
    
}




void CalculateFirstDerivative::getcalculateValues(){ CalculateFirstDerivative::calculateValues(); }
void CalculateFirstDerivative::calculateValues()
{
    double fxold = 0;
    double fxnew = 0;
    double fxderivation = 0;
    
    for(int interncounter = 0; interncounter <=m_counter; interncounter++)
    {
        fxold = m_x * m_x;
        std::cout << "Durchgang: " << interncounter << " x: " << m_x << " f'(x): " << fxderivation  << std::endl;
        m_x = m_x + m_deltax;
        fxnew = m_x * m_x;
        fxderivation = (fxnew - fxold)/m_deltax;
        
    }
}