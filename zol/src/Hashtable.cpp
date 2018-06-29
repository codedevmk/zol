#include <stdio.h>
#include <unordered_map>
#include "../include/Hashtable.hpp"

// Member functions definitions including constructor
Hashtable::Hashtable(void) {
    // constructor
    printf("Hashtable Created");
}

Hashtable::~Hashtable(void) {
    // destructor
    printf("Hashtable Destructor");
}

void Hashtable::Put(const void *key, const void *value)
{
    printf("Hashtable Put");
    htmap[key] = value;
}
        
const void *Hashtable::Get(const void *key)
{
    printf("Hashtable Get");
    return htmap[key];
}