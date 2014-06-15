#include "CalculateValues.h"

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


}