#ifndef __WEAPON_H_INCLUDED__   
#define __WEAPON_H_INCLUDED__  

#include "../Material/Material.hpp"

class Weapon
{
    protected:
        char* _name;
        float _durability;
        float _damage;
        Material* _material;

    public:
        Weapon(char* name, float durability, float damage, Material* material);
        virtual ~Weapon();
};
#endif