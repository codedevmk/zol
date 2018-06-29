#ifndef __HASHTABLE_H_INCLUDED__   
#define __HASHTABLE_H_INCLUDED__  

#include <iostream>
#include <unordered_map>

using namespace std;

class Hashtable
{
    std::unordered_map<const void *, const void *> htmap;

    public:
        Hashtable();
        ~Hashtable();
        
        // Methods
        void Put(const void *key, const void *value);
        const void *Get(const void *key);
};
#endif