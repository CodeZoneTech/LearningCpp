/**
 Lesson 10
 C++ with CodeZone
 
 Enums in C++
 **/
#include <iostream>

enum LOG //enum can be used to assign integer to a word or symbol
{
    INFO, WARNING, ERROR
};// if not explicitly assigned numbering start from zero

//int main()
//{
//    int loglevel = 1;
//    if(loglevel == LOG::INFO)
//    {
//        std::cout << "Log level at INFO\n";
//    }
//    else if(loglevel == LOG::WARNING)
//    {
//        std::cout << "Log level at WARNING\n";
//    }
//    else
//    {
//        std::cout << "Log level at ERROR\n";
//    }
//
//    LOG currentLogLevel;
//    currentLogLevel = ERROR;
//
//    std::cout << "LOG LEVEL: " << currentLogLevel;
//}