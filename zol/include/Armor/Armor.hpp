#ifndef __ARMOR_H_INCLUDED__   
#define __ARMOR_H_INCLUDED__  

#include    "../Material/Material.hpp"

class Armor 
{
    protected:
        char* _name;
        float _durability;
        float _defense;
        Material* _material;

    public:

        Armor(char* name, float durability, float defense, Material* material);
        virtual ~Armor();

        virtual Armor* Clone() const = 0;
};
#endif