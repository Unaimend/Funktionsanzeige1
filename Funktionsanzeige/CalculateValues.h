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
    std::vector<double> givex();
    std::vector<double> givefx();
    int givecounter();
    double givedeltax();
    CalculateValues();
    ~CalculateValues();
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

class Renderer : protected CalculateValues
{
    
    
public:
    void setRenderValues(CalculateValues &fx);
    void Render();
    
protected:
    
private:
    
    
    
};
#endif /* defined(__Funktionsanzeige__CalculateValues__) */
