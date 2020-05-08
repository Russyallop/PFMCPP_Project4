/*
 Project 4 - Part 1 / 9
 video: Chapter 2 Part 7
 Returning Values tasks 

 Create a branch named Part1

 Purpose:  This project will take you through the process of writing a class that wraps a numeric type, beginning with writing simple member functions and ending with a fully templated class with lots of functionality. 
 
 1) write 3 UDTs named FloatType, DoubleType, IntType.
 
 2) give each UDT the following member functions:
        add( lhs, rhs );
        subtract( lhs, rhs );
        multiply( lhs, rhs );
        divide( lhs, rhs );

       lhs is the left-hand-side of the operation, rhs is the right-hand-side
       e.g. x = 2 + 3
              '2' is the lhs
              '3' is the rhs
              '+' is the operation

 3) implement the appropriate action in the member function. 
         a) Be aware that floating point division by 0 is legal, but integer division by 0 will crash your program.  
         b) Handle this possible input when you write your divide() functions.
         c) you should warn the user if they're doing floating-point-division-by-zero but not prevent the division from happening
         d) you should warn AND prevent the division from happening if it is an integer-division-by-zero.
 
 4) make them return the correct primitive type. e.g. if you're implementing the FloatType::add function, your implementation would start like this:
        float FloatType::add( float lhs, float rhs )
 
 5) declare a few instances of each class in main() and call the member functions with the appropriate arguments.
        FloatType ft;
        auto result = ft.add(3.2f, 23.f );
 
 6) print out those results using std::cout:
        std::cout "result of ft.add(): " << result << std::endl;
 
 7) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */
#include <iostream>


struct FloatType
{
    float add( float lhs, float rhs );
    float subtract(float lhs, float rhs );
    float multiply( float lhs, float rhs );
    float divide( float lhs, float rhs );
    
};
struct DoubleType
{
    double add(double lhs,double rhs );
    double subtract(double lhs,double rhs );
    double multiply(double lhs,double rhs );
    double divide(double lhs,double rhs );
};
struct IntType
{
    int add(int lhs, int rhs );
    int subtract(int lhs, int rhs );
    int multiply(int lhs, int rhs );
    int divide(int lhs, int rhs );
};

float FloatType::add(float lhs, float rhs)
{
    return lhs + rhs;
}
float FloatType::subtract(float lhs, float rhs)
{
    return lhs - rhs;
}
float FloatType::multiply(float lhs, float rhs)
{
    return lhs * rhs;
}
float FloatType::divide(float lhs, float rhs)
{
    if(rhs == 0)
        std::cout << "floating-point-division-by-zero" <<std::endl;
    return lhs / rhs;
}
double DoubleType::add(double lhs, double rhs)
{
    return lhs + rhs;
}
double DoubleType::subtract(double lhs, double rhs)
{
    return lhs - rhs;
}
double DoubleType::multiply(double lhs, double rhs)
{
    return lhs * rhs;
}
double DoubleType::divide(double lhs, double rhs)
{
    if(rhs == 0)
        std::cout << "floating-point-division-by-zero gives: ";
    return lhs / rhs;
}
int IntType::add(int lhs, int rhs)
{
    return lhs + rhs;
}
int IntType::subtract(int lhs, int rhs)
{
    return lhs - rhs;
}
int IntType::multiply(int lhs, int rhs)
{
    return lhs * rhs;
}
int IntType::divide(int lhs, int rhs)
{
    if(rhs == 0)
    {
        std::cout << "You are trying to divide an integer by zero which is very naughty" <<std::endl;
        return 0;
    }
    return lhs / rhs;
}

int main() {
    FloatType fta;
    DoubleType dta;
    IntType ita;
    auto ftaResult = fta.add(6.6f,9.9f);
    auto ftbResult = fta.subtract(ftaResult,9.9f);
    std::cout << "ftbResult: "<< ftbResult << std::endl;
    std::cout << "ftb sizet: "<< sizeof(ftbResult) << " bytes" << std::endl;
    auto dtaResult = dta.multiply(4.2,1.1);
    auto dtbResult = dta.divide(dtaResult,0);
    std::cout << "dtbResult: "<< dtbResult << std::endl;
    std::cout << "dtb sizet: "<< sizeof(dtbResult) << " bytes" << std::endl;
    auto itaResult = ita.divide(6,0);
    auto itbResult = ita.add(itaResult,8);
    std::cout << "itbResult: "<< itbResult << std::endl;
    std::cout << "itb sizet: "<< sizeof(itbResult) << " bytes" << std::endl;
    return 0;
}
