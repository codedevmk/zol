#include <iostream>
#include "../../include/Armor/Armor.hpp"

// Member functions definitions including constructor
Armor::Armor(char* name, float durability, float defense, Material* material)
{
    _name = name;
    _durability = durability;
    _defense = defense;
    _material = material;
}

Armor::~Armor(void) {
    // destructor
}