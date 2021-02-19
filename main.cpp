#include <iostream>
#include <cstdlib>  //in order to use the atoi funct
#include <string>
#include "compare.cpp"
//#include "compare.h"
//using namespace std;

//The main function should read two ints from the command line using the atoi function from the cstdlib library.

int main ()
{
    int x, y;
    x = atoi(cin >> x);  //takes user input from command line and converts from string to int type
    y = atoi(cin >> y);  //stores x and y values into array of argv at positions 1 and 2
    bool same = false;
    bool swapped = false; //both bool initialized to false by default; we use this for comparing x and y values

    int number = whichIsBigger(x, y, same);

    makeFirstBigger(x, y, swapped);

    if(same) //if same= true, executes first branch of code, other false and executes 2nd branch of code
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
    return 0;
}