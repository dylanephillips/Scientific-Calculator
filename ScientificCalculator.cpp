/*
Dylan Phillips 
T00750910 
COMP 3141 
Project 

This class defines the ScientificCalculator class methods to perform common scientific functions 
such as trigonometric calculations, exponentiation, logarithm with error checking, and includes a menu 
display. 


*/
#include "ScientificCalculator.h"
#include <iostream>
#include <cmath>  

using namespace std;

// Constructor is Automatically called when a ScientificCalculator object is created.
// Prints a message indicating that the object has been instantiated.
ScientificCalculator::ScientificCalculator() {
    cout << "ScientificCalculator object created." << endl;
}

// Destructor is Automatically called when a ScientificCalculator object is destroyed.
// Prints a message indicating that the object is being destroyed.
ScientificCalculator::~ScientificCalculator() {
    cout << "ScientificCalculator object destroyed." << endl;
}

// Returns the sine of the angle (in radians) using the sin() function.
double ScientificCalculator::sine(double angle) const {
    return sin(angle);
}

// Returns the cosine of the angle (in radians) using the cos() function.
double ScientificCalculator::cosine(double angle) const {
    return cos(angle);
}

// Returns the tangent of the angle (in radians) using the tan() function.
double ScientificCalculator::tangent(double angle) const {
    return tan(angle);
}

// Returns the result of raising 'base' to the power of 'exponent' using pow().
double ScientificCalculator::power(double base, double exponent) const {
    return pow(base, exponent);
}

// Returns the base-10 logarithm of the input value.
// Checks if the value is positive; if not, prints an error and returns 0.
double ScientificCalculator::logarithm(double value) const {
    if (value > 0)
        return log10(value);
    else {
        cout << "Error Logarithm of non-positive number!" << endl;
        return 0;
    }
}

// Returns the exponential function result (e^value) using exp().
double ScientificCalculator::exponential(double value) const {
    return exp(value);
}

// Displays a user-friendly menu listing all available scientific calculator functions.
void ScientificCalculator::displayMenu() const {
    cout << "Scientific Calculator Menu:" << endl;
    cout << "1. Sine" << endl;
    cout << "2. Cosine" << endl;
    cout << "3. Tangent" << endl;
    cout << "4. Power" << endl;
    cout << "5. Logarithm (base 10)" << endl;
    cout << "6. Exponential (e^x)" << endl;
}

