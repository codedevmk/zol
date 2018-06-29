#include <iostream>
#include "../../include/Weapons/Weapon.hpp"

// Member functions definitions including constructor
Weapon::Weapon(char* name, float durability, float damage, Material* material) {
    _name = name;
    _durability = durability;
    _damage = damage;
    _material = material;
}

Weapon::~Weapon(void) {
    // destructor
}