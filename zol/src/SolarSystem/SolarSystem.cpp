#include <iostream>
#include "../../include/SolarSystem/SolarSystem.hpp"
#include "../../include/SolarSystem/AstrObject.hpp"

// Member functions definitions including constructor
SolarSystem::SolarSystem(void) {
    // constructor
}

SolarSystem::~SolarSystem(void) {
    // Free memory
    for (int i = 0; i < _astrObjects.size(); i++)
    {
        delete _astrObjects[i]; 
    }
}

void SolarSystem::Add(AstrObject* object)
{
    _astrObjects.push_back(object);
}