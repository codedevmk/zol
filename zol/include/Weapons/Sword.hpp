#ifndef __SWORD_H_INCLUDED__   
#define __SWORD_H_INCLUDED__  

#include "Sword.hpp"

class Sword : public Weapon
{
    protected:

    public:
        Sword(char* name, float durability, float damage, Material* material);
        virtual ~Sword();
};
#endif