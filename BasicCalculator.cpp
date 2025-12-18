/*
This class defines the BasicCalculator class methods, providing arithmetic 
operations with input validation, menu display, and messages for object creation and destruction.

*/
#include "BasicCalculator.h"
#include <iostream>
#include <cmath>  

using namespace std;

// Constructor is called automatically when a BasicCalculator object is created.
// it will print a message indicating the object has been created.
BasicCalculator::BasicCalculator() {
    cout << "BasicCalculator object created." << endl;
}

// Destructor is called automatically when a BasicCalculator object is destroyed.
// Prints a message indicating destruction.
BasicCalculator::~BasicCalculator() {
    cout << "BasicCalculator object destroyed." << endl;
}

// Performs addition: adds a and b, and returns the result.
int BasicCalculator::addition(int a, int b) const {
    return a + b;
}

// Performs subtraction: subtracts b from a, returns the result.
int BasicCalculator::subtraction(int a, int b) const {
    return a - b;
}

// Performs multiplication of a and b, returns the result.
int BasicCalculator::multiplication(int a, int b) const {
    return a * b;
}

// Performs division of a by b and returns a double result.
// Checks for division by zero to avoid errors.
// If b is zero, prints an error message and returns 0.
double BasicCalculator::division(int a, int b) const {
    if (b != 0)
        return static_cast<double>(a) / b;  // Cast to double for precise division
    else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

// Calculates the square root of an integer a.
// Checks that a is not negative. 
// Returns the square root as a double.
// If a is negative, prints an error and returns 0.
double BasicCalculator::squareRoot(int a) const {
    if (a >= 0)
        return sqrt(a);
    else {
        cout << "Error: Square root of a negative number!" << endl;
        return 0;
    }
}

// Calculates the square of an integer a by multiplying a by itself.
// Returns the squared value as an int.
int BasicCalculator::square(int a) const {
    return a * a;
}

// Displays the menu options for the Basic Calculator.
// Prints all available operations with corresponding numbers.
void BasicCalculator::displayMenu() const {
    cout << "Basic Calculator Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Square Root" << endl;
    cout << "6. Square" << endl;
}

