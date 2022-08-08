/**
 Lesson 11
 C++ with CodeZone
 
 Constructors and Destructors in C++
 **/

#include <iostream>
#include "string"

class Dog
{
private:
    std::string name;
    std::string breed;
public:
    Dog(const std::string &name, const std::string &breed)//Constructor is a special method called when creating an object.
    {
        (*this).name = name;
        this->breed = breed;
        std::cout << "Dog object created\n";
    }
    
    void print_name()
    {
        std::cout << "Name is " << name << std::endl;
    }
    
    ~Dog()//Destructor is a special method called when an object is destroyed. Mostly used to deallocate memory in heap if the object created variables in the heap.
    {
        std::cout << "Dog Object deleted\n";
    }
};

//int main()
//{
//    Dog dog("Tommy", "Poodle");
//    dog.print_name();
//}