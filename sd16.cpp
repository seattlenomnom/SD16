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
    bool finished = false;
    bool myCondition = false;
    int x = 0;
    bool a = true;
    bool b2 = true;

    std::cout << "language version: " << __cplusplus << std::endl;

    if(b)
        std::cout << "The condition is true version 1\n";


    // the following logic is confusing. Got it!
    if(!finished)
        std::cout << "Not finished condition.\n";
    else
        std::cout << "Finised conition.\n";

    // trigraph section
    std::cout << "trigraph section: \n";

    x = (myCondition) ? 1 : 0;
    std::cout << "The value of x is: " << x << '\n';



/* 16.1.3 The Logical Operators */

    std::cout << "Logical Operators\n";

    if(a && b2)
    {
        std::cout << " a AND b is true\n";
    }else{
        std::cout << " a AND b is false\n";
    }

// switch statement
    std::cout << "switch statement\n";
    int w = 3;
    switch (w)
    {
        case 1:
            std::cout << "The value of w is 1\n";
           break;
        case 2:
           std::cout << "The value of w is 2\n";
          break;
        case 3:
          std::cout << "The value of w is 3\n";
         break;
        default:
         std::cout << "The value is none of the above\n";
         break;
    }




}
