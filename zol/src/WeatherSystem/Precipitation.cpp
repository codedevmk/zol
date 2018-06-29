#include "../../include/WeatherSystem/Precipitation.hpp"

// Member functions definitions including constructor
Precipitation::Precipitation(char* name) {
    // constructor
    _name = name;
}

Precipitation::~Precipitation(void) {
    // Free memory
    for (int i = 0; i < _precipitation.size(); i++)
    {
        delete _precipitation[i]; 
    }
}

void Precipitation::Add(Precipitation* precipitation)
{
    _precipitation.push_back(precipitation);
}