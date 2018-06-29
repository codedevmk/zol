#ifndef __PLANET_H_INCLUDED__   
#define __PLANET_H_INCLUDED__  

#include "AstrObject.hpp"

class Planet : public AstrObject
{
    protected:

    public:
        Planet(char* name, double mass, int diameter, int radius, double surfaceGravity);
        ~Planet();
};
#endif