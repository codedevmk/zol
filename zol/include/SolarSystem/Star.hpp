#ifndef __STAR_H_INCLUDED__   
#define __STAR_H_INCLUDED__  

#include "AstrObject.hpp"

class Star : public AstrObject
{
    protected:

    public:
        Star(char* name, double mass, int diameter, int radius, double surfaceGravity);
        ~Star();
};

#endif