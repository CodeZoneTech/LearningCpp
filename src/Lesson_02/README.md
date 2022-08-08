# Lesson 2

## Functions and Variables

Functions are pieces of code that can be used over and over again. Variables are symbols to memory locations in memory.

Variables

Variables are declared as follows,

*datatype variable_name;*

`std::string example;`

Variables are initialized as follows,

*variable_name = data;*

`example = "Hello World!";`

Variables can be declared and initialized in the same line,

*datatype variable_name = data;*

`std::string example =  "Hello World!";`

Functions

Functions are declared as follows,

*return_datatype function_name(parameter_datatype parameter_name);*

`void printName(std::string input);`

Above is a function declaration. This tells the compiler the function exists.

Function is defined as follows,

*return_datatype function_name(parameter_datatype parameter_name)*

{

*functionbody;*

}

`void printName(std::string input)`
`{` 

`std::cout << input;` 

`}`
Above is a function definition. This is the code that is executed.

Functions are called as follows,

*function_name(parameters);*

`printName("Hello World!");`