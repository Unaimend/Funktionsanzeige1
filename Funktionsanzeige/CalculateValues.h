//
//  CalculateValues.h
//  Funktionsanzeige
//
//  Created by Thomas Dost on 15.06.14.
//  Copyright (c) 2014 Thomas Dost. All rights reserved.
//

#ifndef __Funktionsanzeige__CalculateValues__
#define __Funktionsanzeige__CalculateValues__

#include <iostream>
#include <vector>

#include "Renderer.h"

class CalculateValues 
{
    
public:
    //--------Functions------
    void setcalculateValues(double x, float deltax, int counter);
    void getcalculateValues();
    CalculateValues();
    //--------Variables------



protected:
    //--------Functions------
    
    //--------Variables------
    double m_x;
    float m_deltax;
    int m_counter;
 
    std::vector<double> xvalues;
    std::vector<double> fxvalues;
    
    std::vector<double> fxfirstderivativevalues;
    std::vector<double> xfirstderivativevalues;

private:
    //--------Functions------
    void calculateFirstDerivative();
    void calculateFx();
    //--------Variables------

    
    
    
};

class Renderer : public CalculateValues
{
    
    
public:
     void Render(CalculateValues &fx);
    
protected:
    
private:
    
    
    
};
#endif /* defined(__Funktionsanzeige__CalculateValues__) */
