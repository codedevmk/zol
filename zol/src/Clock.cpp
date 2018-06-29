#include <stdio.h>
#include "../include/Clock.hpp"
#include "../include/IEventUpdatable.hpp"
#include "../include/IEvent.hpp"

#define SECONDS_MAX 60
#define MINUTES_MAX 60
#define HOURS_MAX 24

// Gregorian Calendar
#define DAYNAMES                7
#define MONTHNAMES              12

#define MAX_DAYS_IN_MONTH       31
#define MAX_MONTHS_IN_YEAR      12


//char Days[DAYNAMES][10] = {"Sunday","Monday", "Tuesday", "Wednsday", "Thursday", "Friday", "Saturday"};
//char Months[MONTHNAMES][10] = {"January","February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
//int MonthsDays[MONTHNAMES][2] = {{31}, {29},{31},{30},{31},{30},{31},{31}, {30},{31},{30},{31}};

// Member functions definitions including constructor
Clock::Clock(void) {
    // constructor
    _secondsCounter = _minutesCounter = _hoursCounter = 0;

    // Initialize Days per month
   // for (int idx = 0; idx < MONTHNAMES; idx++) 
   // {
       // months[idx].Key = idx; 
       // months[idx].Name = Months[idx];

       // for (int idy = 0; idy < DAYNAMES; idy++) 
       // {
       //     months[idx].Days[idy].Key = idx; 
       //     months[idx].Days[idy].Name = Days[idx];
       // }
   // }
}

Clock::~Clock(void) {
    // destructor
}

void Clock::Update()
{
    if (_secondsCounter < SECONDS_MAX) 
    {
        _secondsCounter++;
    }
    else
    {
        _secondsCounter = 0;
        if(_minutesCounter < MINUTES_MAX)
        {
            _minutesCounter++;
        }
        else{
            _minutesCounter = 0;
            if (_hoursCounter < HOURS_MAX)
            {
                _hoursCounter++;              
            }
            else
            {

            }
        }
    }

    printf("Time  %d:%d:%d\n", _hoursCounter, _minutesCounter, _secondsCounter);
}
 