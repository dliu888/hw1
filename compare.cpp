//  CONTAINS IMPLEMENTATION OF THREE FUNCTIONS: whichIsBigger, makeBothSame, makeFirstBigger

#include "compare.h"

int whichIsBigger (int x, int y, bool& same) //takes 2 ints, x,y and a reference to bool, same
{
    if( x > y )
    {
        same = false;
        return x;
    } 
        else if( x < y ) {
            same = false;
            return y;
        } 
        else {
            same = true;
        } return 0;
        //x == y? same = true : same = false;
        //return x > y? x : y;
}

int makeBothSame (int x, int& y)   //takes an int,x and a reference to an int, y
{
    int tempY = y;  //to hold y original value
    y = x;  //set y to x's value
    
    return tempY;   //returns y's former value
}

void makeFirstBigger (int& x, int& y, bool& swapped)   //takes 2 int references,x,y and a bool reference, swapped
{
    if( y > x )
        {   
            int temp = y; //holds large value to be later transfered to x variable
            y = x; //swapping y with x value
            x = temp; //x now hold old y value, making it bigger than y
            swapped = true;
        } else {
            swapped = false;
        }
}