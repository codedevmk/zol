#ifndef __IEVENT_H_INCLUDED__   
#define __IEVENT_H_INCLUDED__  

class IEvent
{
    private:
    
    public:
        IEvent(){printf("IEvent Created");}
        virtual ~IEvent(){printf("IEvent Destroyed");}
};

#endif