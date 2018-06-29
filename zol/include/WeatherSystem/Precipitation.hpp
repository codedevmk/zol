#ifndef __PRECIPITATION_H_INCLUDED__   
#define __PRECIPITATION_H_INCLUDED__  

#include <vector>

enum class PrecipitationForm
{
    Liquid,
    Solid

};

class Precipitation
{
    protected:
        char* _name;
        PrecipitationForm   _form;

        std::vector<Precipitation*> _precipitation;

    public:
        Precipitation(char* name);
        virtual ~Precipitation();

        virtual void Add(Precipitation* precipitation);
};
#endif