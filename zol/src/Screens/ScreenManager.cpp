#include <string>
#include <iostream>

#include "../../include/Screens/ScreenManager.hpp"

ScreenManager &ScreenManager::GetInstance()
{
    static ScreenManager instance;
    return instance;
}

ScreenManager::ScreenManager()
{

}

ScreenManager::~ScreenManager()
{

}

void ScreenManager::SetText(std::string text)
{
        this->_text = text; 
}

void ScreenManager::DrawText()
{
    std::cout << _text << std::endl;
}