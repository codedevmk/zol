#include "../../include/SolarSystem/Planet.hpp"


// Member functions definitions including constructor
Planet::Planet(char* name, double mass, int diameter, int radius, double surfaceGravity)
       :AstrObject(name,mass,diameter,radius,surfaceGravity) 
{
    // constructor

}

Planet::~Planet(void) {
    // destructor
}