# Lesson 4

## Basic Loops in C++

Loops are useful to execute the same code several times in a row.

### For Loop

For loop have the iteration variable, iteration method built-in. Iterate until condition is true.

*for(iterator variable; loop-exit condition; iteration method)*

`for(int i = 0; i < 10; i++;)
{
body
}`

### While Loop

While is a bare metal loop with only the exit condition.

*while(loop-exit condition)*

`int i = 0;`
`while(i < 2)
 {
   i++;
   body
 }`

### Do-While Loop

Do while loop is used if the loop must execute at least once even the condition is false. 

*do
{ 
body
} while(exit condition)*

`int i = 0;
do
 {
   i++;
   body
 }`