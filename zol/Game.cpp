#include <SFML/Graphics.hpp>
#include <unistd.h>
#include <ctime>
#include <math.h>

#include "include/Engine/Engine.hpp"
#include "include/Clock.hpp"
#include "include/Hashtable.hpp"
#include "include/World.hpp"

#include "include/SolarSystem/AstrObject.hpp"
#include "include/SolarSystem/Planet.hpp"
#include "include/SolarSystem/Star.hpp"
#include "include/SolarSystem/SolarSystem.hpp"
#include "include/SolarSystem/Satellite.hpp"

#include "include/Material/Material.hpp"
#include "include/Screens/ScreenManager.hpp"


using namespace std;

#define WIDTH   1920
#define HEIGHT  1080
#define MASS(x,y)   x * pow(10,y)

int main()
{
    ScreenManager::GetInstance().SetText("Testing");
    ScreenManager::GetInstance().DrawText();

    Material* quartz = new Material((char*)"Quartz", false, false);
    Material* granite = new Material((char*)"Granite", false, false);

    Clock* clock = new Clock();

    World* world = new World();

    SolarSystem* solar = new SolarSystem();
    //                          name,       mass,           diameter (mi),  radius (mi),    surf gravity (m/s2)
    solar->Add(new Star((char*)"Sun",       MASS(1.989,30), 864337.3,       432169,         274));
    solar->Add(new Planet((char*)"Mercury", MASS(3.285,23), 3032,           1516,           3.7));
    solar->Add(new Planet((char*)"Venus",   MASS(4.867,24), 7520.8,         3760,           8.87));
    solar->Add(new Planet((char*)"Earth",   MASS(5.972,24), 7917.5,         3959,           9.807));
    solar->Add(new Planet((char*)"Mars",    MASS(6.39,23),  4212,           2106,           3.711));
    solar->Add(new Planet((char*)"Jupiter", MASS(1.898,27), 86881.4,        43441,          24.79));
    solar->Add(new Planet((char*)"Saturn",  MASS(5.683,26), 72367.4,        36184,          10.44));
    solar->Add(new Planet((char*)"Uranus",  MASS(8.681,25), 31518,          15759,          8.87));
    solar->Add(new Planet((char*)"Neptune", MASS(1.024,26), 30599,          15299,          11.15));

    //                                  name               mass                diameter (mi)radius (mi)surf gravity (m/s2)
    Planet* earth    = new Planet(      (char*)"Earth",     MASS(5.972,24),    7917.5,      3959,   9.807);
    Satellite* moon  = new Satellite(   (char*)"Moon",      MASS(7.347,22),    2159,        1079,   1.62);
    earth->Add(moon);
    solar->Add(earth);

    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Game");
    window.setFramerateLimit(60);

    srand(time(0));

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    

    Hashtable hash;
    hash.Put("Test","Test2");
    int one = 1;
    hash.Put("one", &one);
    printf("Hashtable %s %d",(char *)hash.Get("Test"), *(int *)hash.Get("one"));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        clock->Update();

        window.clear();
        window.draw(shape);
        window.display();
    }

    Engine egnine;
    return 0;
}