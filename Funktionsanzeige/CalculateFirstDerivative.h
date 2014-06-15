#ifndef __Funktionsanzeige___CalculateFirstDerivative__
#define __Funktionsanzeige___CalculateFirstDerivative__

#include "CalculateValues.h"

class CalculateFirstDerivative : public CalculateValues
{
public:
  
    virtual void getcalculateValues();
    //--------Functions------
    CalculateFirstDerivative();
    virtual ~CalculateFirstDerivative();
    
    //--------Variables------
protected:
    //--------Functions------
    void calculateValues();
    //--------Variables------
   
private:
    
};

#endif /* defined(__Funktionsanzeige___CalculateFirstDerivative__) */
