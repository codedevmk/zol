#ifndef __SHIELD_H_INCLUDED__   
#define __SHIELD_H_INCLUDED__  

#include    "../Material/Material.hpp"
#include    "Armor.hpp"

enum class ShieldShapes
{
    Round,
    Oval,
    Square,
    Rectangular,
    Triangular, 
    Bilabial,
    Scalloped
};

class Shield : public Armor
{
    protected:
        ShieldShapes _shape;

        int _size;
        int _mount;

    public:
        Shield(char* name, float durability, float defense, Material* material, ShieldShapes shape);
        ~Shield();

        virtual Shield* Clone() const;
};
#endif