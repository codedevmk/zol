#include <iostream>

#include "../../include/Material/Material.hpp"
#include "../../include/Weapons/Weapon.hpp"
#include "../../include/Weapons/Sword.hpp"

// Member functions definitions including constructor
Sword::Sword(char* name, float durability, float damage, Material* material)
    :Weapon(name, durability, damage, material) {

}

Sword::~Sword(void) {
    // destructor
}
 