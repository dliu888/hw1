[![Work in Repl.it](https://classroom.github.com/assets/work-in-replit-14baed9a392b3a25080506f3b7b6d57f295ec2978f6f33ec97e36a161684cbe9.svg)](https://classroom.github.com/online_ide?assignment_repo_id=4134314&assignment_repo_type=AssignmentRepo)
# Homework 1: Structure of a C++ program, reference variables

Create a hw branch.

Create three files. 
* `compare.h` should contain the __declaration__ of three functions:
   - `whichIsBigger` should take two ints, x and y, and a reference to a bool called `same`. It should return the larger of the two ints, and set `same` to `true` if they were the same and  `false` otherwise.
   - `makeBothSame` should take an int, x, and an int reference, y. It should set y to x's value and return y's former value.
   - `makeFirstBigger` should take two int references, x and y, and a bool reference, swapped. It should compare them and if necessary swap them to make x bigger than y. It should set swap to `true` if x was originally smaller than y, and `false` otherwise.
   - Make sure to use appropriate header guards.
   
* `compare.cpp` should contain the __implementation__ of those three functions.

* `main.cpp` should use the three functions as follows:
   - The `main` function should read two ints from the command line using the `atoi` function from the `cstdlib` library.
   - `main` itself should __never directly compare the two integers. All comparisons and modifications must be done through the three functions defined above.__
   - Use `whichIsBigger` to either print "\[x/y\] is larger" or "x and y are the same". (Choose x or y as appropriate.)
   - Use `makeFirstBigger` to either print "x's new value is \[\] and y's new value is \[\]" or "x and y were not swapped because they were already in the right order." (Replace the brackets with the correct values.)
   - If x and y are not the same (again, do not compare them in `main`), use `makeBothSame` and print: "Now x and y both equal \[\]. Previously, y's value was \[\]." (Replace the brackets with the correct values.)
   
Follow the homework submission process outlined in Homework 0.

Your code must compile and must appropriately implement the elements above. Comment each function declaration and definition. Try to make your code elegant: readable and sparse.

