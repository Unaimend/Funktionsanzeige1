//
//   CalculateFirstDerivative.h
//  Funktionsanzeige
//
//  Created by Thomas Dost on 15.06.14.
//  Copyright (c) 2014 Thomas Dost. All rights reserved.
//

#ifndef __Funktionsanzeige___CalculateFirstDerivative__
#define __Funktionsanzeige___CalculateFirstDerivative__
class CalculateFirstDerivative
{
public:
    void setcalculateValues(double x, float deltax, int counter);
    void getcalculateValues();
    //--------Functions------
    CalculateFirstDerivative();
    ~CalculateFirstDerivative();
    
    //--------Variables------
protected:
    //--------Functions------
    void calculateValues();
    //--------Variables------
    double m_x;
    float m_deltax;
    int m_counter;
    
    
};

#endif /* defined(__Funktionsanzeige___CalculateFirstDerivative__) */
