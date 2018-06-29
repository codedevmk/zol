#ifndef __STONE_H_INCLUDED__   
#define __STONE_H_INCLUDED__  

#include "Material.hpp"

class Stone : public Material
{
    protected:

    public:
        Stone(char* name);
        ~Stone();
};
#endif