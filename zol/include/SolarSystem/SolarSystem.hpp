#ifndef __SOLARSYSTEM_H_INCLUDED__   
#define __SOLARSYSTEM_H_INCLUDED__  

#include <vector>
#include "AstrObject.hpp"

class SolarSystem
{
    protected:
        std::vector<AstrObject*> _astrObjects;

    public:
        SolarSystem();
        ~SolarSystem();

        void Add(AstrObject* object);
};

#endif