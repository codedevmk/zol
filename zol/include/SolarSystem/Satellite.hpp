#ifndef __SATELLITE_H_INCLUDED__   
#define __SATELLITE_H_INCLUDED__  

#include "AstrObject.hpp"

class Satellite : public AstrObject
{
    protected:

    public:
        Satellite(char* name, double mass, int diameter, int radius, double surfaceGravity);
        ~Satellite();
};

#endif