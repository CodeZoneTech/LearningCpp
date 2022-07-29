/**
 Lesson 5
 C++ with CodeZone
 
 Control Flow in C++
 **/

#include <iostream>


int main()
{
    for(int i = 0; i < 10; i++)
    {
        if(i == 5)
        {
            continue;
        }
        std::cout << "Continue " << i << std::endl;
    }
    
    for(int i = 0; i < 10; i++)
    {
        if(i == 5)
        {
            break;
        }
        std::cout << "Break " << i << std::endl;
    }
}

