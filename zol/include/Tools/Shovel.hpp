#ifndef __SHOVEL_H_INCLUDED__   
#define __SHOVEL_H_INCLUDED__  

#include "Tool.hpp"

enum class ShovelTypes
{
    WoodenShovel,
    StoneShovel,
    IronShovel,
    GoldenShovel,
    DiamondSHovel
};

class Shovel : public Tool
{
    public:
        Shovel();
        ~Shovel();
};
#endif