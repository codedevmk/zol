#include "../../include/SolarSystem/AstrObject.hpp"

// Member functions definitions including constructor
AstrObject::AstrObject(char* name, double mass, int diameter, int radius, double surfaceGravity) {
    // constructor
    _name = name;
    _mass = mass;
    _diameter = diameter;
    _radius = radius;
    _surfaceGravity = surfaceGravity;
}

AstrObject::~AstrObject(void) {
    // Free memory
    for (int i = 0; i < _astrObjects.size(); i++)
    {
        delete _astrObjects[i]; 
    }
}

void AstrObject::Add(AstrObject* object)
{
    _astrObjects.push_back(object);
}