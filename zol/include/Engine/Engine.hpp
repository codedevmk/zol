#ifndef __ENGINE_H_INCLUDED__   
#define __ENGINE_H_INCLUDED__  

#include "../Clock.hpp"

class Engine
{
    protected:
        Clock _clock;

    public:
        Engine();
        ~Engine();
};
#endif