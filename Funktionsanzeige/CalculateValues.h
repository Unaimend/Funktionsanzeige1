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
};
#endif /* defined(__Funktionsanzeige__CalculateValues__) */
