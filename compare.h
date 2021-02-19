//  CONTAINS DECLARATION OF 3 FUNCTIONS: whichIsBigger, makeBothSame, makeFirstBigger

#ifndef COMPARE_H   //header guards to prevent error
#define COMPARE_H


int whichIsBigger(int x, int y, bool& same); //forward declaration for whichIsBigger

int makeBothSame(int x, int& y); //forward declaration for makeBothSame

void makeFirstBigger(int& x, int& y, bool& swapped); //forward declaration for makeFirstBigger

#endif