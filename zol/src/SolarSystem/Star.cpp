#include <stdio.h>
#include "../../include/SolarSystem/Star.hpp"
#include "../../include/SolarSystem/AstrObject.hpp"

// Member functions definitions including constructor
Star::Star(char* name, double mass, int diameter, int radius, double surfaceGravity)
     :AstrObject(name,mass,diameter,radius, surfaceGravity) 
{ 
    // constructor
}

Star::~Star(void) {
    // destructor

}