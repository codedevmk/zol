#include <iostream>
#include "../../include/Material/Material.hpp"

Property::Property(char* name)
{
    _name = name;
   // _data = *"";
  //  _size = sizeof data;
}

Property::~Property()
{

}

// Member functions definitions including constructor
Material::Material(char* name, bool liquid, bool solid) {
    // constructor
    _property = new Property((char*)"test");
}

Material::~Material(void) {
    // destructor
}
 