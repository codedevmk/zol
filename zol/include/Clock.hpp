#ifndef __CLOCK_H_INCLUDED__   
#define __CLOCK_H_INCLUDED__  

#include "IEventUpdatable.hpp"
#include "IEvent.hpp"

//struct DayInfo
//{
 //   int Key;
  //  char* Name;
//} weekdays[7];

//struct MonthInfo
//{
 //   int Key;
 //   char* Name;
 //   DayInfo Days[7];

//} months[12];

class Clock : public IEventUpdatable
{
    protected:
    int _secondsCounter;
    int _minutesCounter;
    int _hoursCounter;
    int _daysCounter;
    int _monthsCounter;
    int _yearsCounter;
    int** _monthsDays;

    public:
        Clock();
        ~Clock();

        void Update();
};

#endif