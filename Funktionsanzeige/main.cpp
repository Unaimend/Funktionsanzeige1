#include <string>
#include <memory>
#include <vector>

#include "SFML/Graphics.hpp"
#include "CalculateValues.h"
#include "Renderer.h"



int main(int, char const**)
{
   
    double x = 0;
    int counter = 200;
    float deltax = 0.1;
    

    
    //Eine neue Funktion erstellen, Werte zuweisen und berechen.
    std::shared_ptr<CalculateValues> fx1(new CalculateValues);
    fx1->setcalculateValues(x, deltax, counter);
    fx1->getcalculateValues();

    Renderer window;
    window.setRenderValues(*fx1);
    window.Render();
   
    
    
       return 0;
}




//    CalculateValues *fx1 = nullptr;    NIE WIEDER VERWENDEN ICH BENUTZE JETZT NURNOCH DIE SMARTEN GESHAREDEN POINTER
//    fx1 = new CalculateValues;
//    delete fx1;
//    fx1 = nullptr;











