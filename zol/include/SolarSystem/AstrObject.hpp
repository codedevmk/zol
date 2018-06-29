#ifndef __ASTROBJECT_H_INCLUDED__   
#define __ASTROBJECT_H_INCLUDED__  

#include <vector>

class AstrObject
{
    protected:
        std::vector<AstrObject*> _astrObjects;

        char* _name;
        double _mass;
        double _surfaceGravity;
        int _diameter;
        int _radius;

    public:
        AstrObject(char* name, double mass, int diameter, int radius, double surfaceGravity);
        virtual ~AstrObject();

        virtual void Add(AstrObject* object);
};
#endif