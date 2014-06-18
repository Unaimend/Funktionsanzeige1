
#include "CalculateValues.h"
#include "Renderer.h"

#include <string>
#include <memory>


int main(int, char const**)
{
    double x = 0;
    int counter = 200;
    float deltax = 0.1;
    
//    CalculateValues *fx1 = nullptr;    NIE WIEDER VERWENDEN ICH BENUTZE JETZT NURNOCH DIE SMARTEN GESHAREDEN POINTER
//    fx1 = new CalculateValues;
//    delete fx1;
//    fx1 = nullptr;

    
    //Eine neue Funktion erstellen, Werte zuweisen und berechen.
    std::shared_ptr<CalculateValues> fx1(new CalculateValues);
    fx1->setcalculateValues(x, deltax, counter);
    fx1->getcalculateValues();
    
    
    
    Renderer Window;
    Window.Render(*fx1);
    std::cin.get();
    return 0;
}


























//// Create the main window
//sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
//while (window.isOpen())
//{
//    // Process events
//    sf::Event event;
//    while (window.pollEvent(event))
//    {
//        // Close window : exit
//        if (event.type == sf::Event::Closed) {
//            window.close();
//        }
//        
//        // Espace pressed : exit
//        if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
//            window.close();
//        }
//    }
//    
//    // Clear screen
//    window.clear();
//    // Update the window
//    window.display();
//}

