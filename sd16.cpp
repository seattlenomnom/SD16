/* sd16.cpp is the source file for sd16
 * Description:
 *
 * sd16 experiments with concepts found in chapter 16 of, Dmitrovic, Slobodan,
 * C++ for Absolute Beginners, Apress, 2014, New York, New York.
 *
 * Statements
 *  Selection Statements
 *      if statements
 *      conditional expressions
 *      the logical operators
 *          intro
 *          comparison operators
 *      switch statement
 *  iteration statements
 *      intro
 *      for statement
 *      while statement
 *      do statement
 *
*/

#include <iostream>

int main() {

    bool b = true;

    std::cout << "language version: " << __cplusplus << std::endl;
/*
    if(b)
        std::cout << "The condition is true\n";
*/
    if(!b)
        std::cout << "The condition is true.\n";
    else
        std::cout << "The condition is false.\n";




}
