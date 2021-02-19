#include <iostream>
#include <cstdlib>  //in order to use the atoi funct
#include <string>
#include "compare.cpp"
//#include "compare.h"
//using namespace std;

//The main function should read two ints from the command line using the atoi function from the cstdlib library.

int main (int argc, char** argv[])
{
    int x = atoi(argv[1]);  //takes user input from command line and converts from string to int type
    int y = atoi(argv[2]);  //stores x and y values into array of argv at positions 1 and 2
    bool same = false;
    bool swapped = false; //both bool initialized to false by default; we use this for comparing x and y values

    int number = whichIsBigger(x, y, same);

    makeFirstBigger(x, y, swapped);

    if(same) //if same = true, executes first branch of code, other false and executes 2nd branch of code
    {
        std::cout << "x and y are the same" << std::endl;
    } 
    else
    {
        std::cout << number << " is larger " << std::endl;
    }

    if(swapped)
    {
        std::cout << "x's new value is " << x << " and y's new value is " << y << std::endl;
    }
    else
    {
        std::cout << "x and y were not swapped because they were already in the right order." << std::endl;
    }
    
    //if values of x and y are not the same..
     if(!same)
   {
       int previousNumber = makeBothSame(x, y);
       std::cout << "Now x and y are both equal to " << x << "Previously, y's value was " << previousNumber << std::endl;
   }
   return 0;

}
