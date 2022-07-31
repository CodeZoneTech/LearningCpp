/**
 Lesson 6
 C++ with CodeZone
 
 Pointers in C++
 **/
 
#include <iostream>

//Pointer is an integer that stores the memory address of a variable
//Value at the pointer can be accessed by dereferencing the pointer
//Pointer is also stored in memory therefore it has a memory address that can be assigned to another pointer


//int main()
//{
//    int variable = 10;
//    int* pointer = &variable;// & operator returns the address of the variable which is assigned to the pointer.
//
//    std::cout << "Variable: " << variable << std::endl;
//    std::cout << "Pointer: " << pointer << std::endl;
//    std::cout << "Pointer dereferenced: " << *pointer << std::endl;
//    std::cout << "Pointer of the pointer: " << &pointer << std::endl;
//
//    //String can be stored in a char array and a char pointer can be used that points to the array.
//    char charArray[] = "This is an Array";
//    char* charPointer = charArray;// & is not used with array because array is stored in memory sequentially and variable only need to store the starting position
//    void* voidPointer = charArray;
//    std::cout << charArray << std::endl;
//    std::cout << charPointer << std::endl;// std::cout takes a chararray pointer and dereference it;
//    std::cout << voidPointer << std::endl;// voidPointer is a pointer with a specific data type assigned. This is evaluated by the compiler; ALL POINTERS ARE SAME AT RUNTIME;
//}