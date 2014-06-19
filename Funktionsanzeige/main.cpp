#include <string>
#include <memory>
#include <vector>
#include <thread>

#include "SFML/Graphics.hpp"
#include "CalculateValues.h"
#include "Renderer.h"
/**********************************************
*     Developed by: Thomas Dost               *
*     Version: 1.1.0                          *
*                                             *
*                                             *
*                                             *
*                                             *
*                                             *
***********************************************/
void yolo( );

int main(int, char const**)
{
    
    double x = -10;
    int counter = 200;
    float deltax = 0.1;
    int wahl = 0; //Wahl = 0 bedeutet x*x, wahl = 1 bedeutet x*x*x, wahl = 2 ist ne fuktion die man selber i ncode einstellen darf
    double x2 = -100;
    int counter2 = 2000;
    float deltax2 = 0.1;

    
    //Eine neue Funktion erstellen, Werte zuweisen und berechen.
    std::shared_ptr<CalculateValues> fx1(new CalculateValues);
    fx1->setcalculateValues(x, deltax, counter, wahl);
    fx1->getcalculateValues();
    
    Renderer window;
    window.setRenderValues(*fx1);
    window.Render();
    
    
    
    wahl = 2;
    std::shared_ptr<CalculateValues> fx2(new CalculateValues);
    fx2->setcalculateValues(x2, deltax2, counter2, wahl);
    fx2->getcalculateValues();

    window.setRenderValues(*fx2);
    window.Render();
    return 0;
}




//    CalculateValues *fx1 = nullptr;    NIE WIEDER VERWENDEN ICH BENUTZE JETZT NURNOCH DIE SMARTEN GESHAREDEN POINTER
//    fx1 = new CalculateValues;
//    delete fx1;
//    fx1 = nullptr;














