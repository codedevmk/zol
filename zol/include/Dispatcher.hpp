#ifndef __DISPATCHER_H_INCLUDED__   
#define __DISPATCHER_H_INCLUDED__  

#include <vector>

class Dispatcher
{
    Dispatcher() { }

    template<class C, void(C::*M)() = C::receive>
    static void invoke(void *instance) {
        (static_cast<C*>(instance)->*M)();
    }

public:
    template<class C, void(C::*M)() = &C::receive>
    static Dispatcher create(C *instance) {
        Dispatcher d;
        d.fn = &invoke<C, M>;
        d.instance = instance;
        return d;
    }

    void operator()() {
        (fn)(instance);
    }

private:
    using Fn = void(*)(void *);
    Fn fn;
    void *instance;
};

#endif