#include <iostream>
#include "../../include/Armor/Armor.hpp"
#include "../../include/Armor/Shield.hpp"

// Member functions definitions including constructor
Shield::Shield(char* name, float durability, float damage, Material* material, ShieldShapes shape)
    :Armor(name, durability, damage, material) {
    
    _shape = shape;
}

Shield::~Shield(void) {
    // destructor
}

Shield* Shield::Clone() const
{
    return new Shield(*this);
} 