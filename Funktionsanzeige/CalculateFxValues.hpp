//
//  CalculateFxValues.hpp
//  Funktionsanzeige
//
//  Created by Thomas Dost on 15.06.14.
//  Copyright (c) 2014 Thomas Dost. All rights reserved.
//

#ifndef Funktionsanzeige_CalculateFxValues_hpp
#define Funktionsanzeige_CalculateFxValues_hpp

class CalculateFxValues
{
public:
    void setcalculateValues(double x, int counter);
    void getcalculateValues();
    //--------Functions------
    CalculateFxValues();
    ~CalculateFxValues();
    
    //--------Variables------
protected:
    //--------Functions------
    void calculateValues();
    //--------Variables------
    double m_x;
    int m_counter;
    
    
private:
    
};

#endif
