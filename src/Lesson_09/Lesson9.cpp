/**
 Lesson 9
 C++ with CodeZone
 
 Structs in C++
 **/
 
#include <iostream>
#include <string>

//Basic Struct

struct Car
{
    std::string brand;
    std::string model;
    
    void printBrand()
    {
        std::cout << brand << std::endl;
    }
};

//Struct is similar to classes but in classes data and methods are private by default. In structs, data and methods are public by default.

//int main()
//{
//    Car car1;// Allocated in the stack
//
//    car1.brand = "BMW";
//    car1.model = "i5";
//
//    car1.printBrand();
//
//    Car* car2 = new Car();//Allocated in the heap
//
//    (*car2).brand = "Toyota";
//    (*car2).model = "yaris";
//    (*car2).printBrand();
//
//    Car* car3 = new Car();
//
//    car3->brand = "Honda";
//    car3->model = "civic";
//    car3->printBrand();
//
//    delete car2;//Memory must be freed manual when allocating in the heap.
//    delete car3;
//}