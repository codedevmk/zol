#include <stdio.h>
#include "../../include/SolarSystem/Satellite.hpp"
#include "../../include/SolarSystem/AstrObject.hpp"

// Member functions definitions including constructor
Satellite::Satellite(char* name, double mass, int diameter, int radius, double surfaceGravity)
     :AstrObject(name,mass,diameter,radius, surfaceGravity) 
{ 
    // constructor
}

Satellite::~Satellite(void) {
    // destructor

}