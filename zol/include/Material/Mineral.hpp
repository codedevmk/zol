#ifndef __MINERAL_H_INCLUDED__   
#define __MINERAL_H_INCLUDED__  

#include "Material.hpp"

class Mineral : public Material
{
    protected:

    public:
        Mineral(char* name);
        ~Mineral();
};
#endif