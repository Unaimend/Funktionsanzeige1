#ifndef __Funktionsanzeige__CalculateValues__
#define __Funktionsanzeige__CalculateValues__

#include <iostream>
#include <vector>
class Button;
#include "MyButton.h"
#include "Renderer.h"
#include "SFML/Graphics.hpp"

class CalculateValues 
{
    
public:
    //--------Functions------
    void setcalculateValues(double x, float deltax, int counter, int funktionswahl = 0);
    void getcalculateValues();
    std::vector<double> givex();
    std::vector<double> givefx();
    std::vector<double> givefirstderivationx();
    std::vector<double> givefirstderivationfx();
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
    int  m_funktionswahl;
    int m_xorginal;
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

class Renderer : protected CalculateValues, public MyButton
{
    
    
public:
    void setRenderValues(CalculateValues &fx);
    void Render();
    
protected:
    
private:
    //--------Functions------
    unsigned int m_width;
    unsigned int m_heigth;
    //--------Variables------
    void renderaxis(sf::RenderWindow &window);
    void renderfunction(std::vector<double> &localcopyx, std::vector<double> &localcopyfx, std::vector<double>::iterator &it, std::vector<double>::iterator &it2, sf::CircleShape &values, sf::RenderWindow &window, std::vector<double> &firstderivationlocalcopyx, std::vector<double> &firstderivationlocalcopyfx, std::vector<double>::iterator &it3, std::vector<double>::iterator &it4, sf::CircleShape &firstderivationvalue);
    void renderfirstderivation(std::vector<double> &firstderivationlocalcopyx, std::vector<double> &firstderivationlocalcopyfx, std::vector<double>::iterator &it3,  std::vector<double>::iterator &it4, sf::CircleShape &firstderivationvalue, sf::RenderWindow &window);
    
};



#endif /* defined(__Funktionsanzeige__CalculateValues__) */
