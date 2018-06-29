#ifndef __SCREENMANAGER_H_INCLUDED__   
#define __SCREENMANAGER_H_INCLUDED__  
//https://www.youtube.com/watch?v=Q7O13p_IY0k

#include <string>
#include <iostream>

class ScreenManager
{
    public:
        ~ScreenManager();
        static ScreenManager &GetInstance();

        void SetText(std::string text);
        void DrawText();

    private:
        ScreenManager();
        ScreenManager(ScreenManager const&);
        void operator=(ScreenManager const&);
        std::string _text;
};
#endif