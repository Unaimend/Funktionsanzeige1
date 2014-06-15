
#ifndef Funktionsanzeige_CalculateFxValues_hpp
#define Funktionsanzeige_CalculateFxValues_hpp

#include "CalculateValues.h"

class CalculateFxValues : public CalculateValues
{
public:
    virtual void getcalculateValues();
    //--------Functions------
    CalculateFxValues();
    virtual ~CalculateFxValues();
    
    //--------Variables------
protected:
    //--------Functions------
    void calculateValues();
    //--------Variables------
   
    
private:
    
};

#endif
