#ifndef __TOOL_H_INCLUDED__   
#define __TOOL_H_INCLUDED__  

#include    "../Material/Material.hpp"

class Tool
{
    protected:
        float _durability;

    public:
        Tool(char* name);
        virtual ~Tool();
};
#endif