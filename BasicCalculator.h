/*
This header file declares a BasicCalculator class that provides methods for 
performing common arithmetic operations and displaying a menu of these operations.


*/
#ifndef BASIC_CALCULATOR_H
#define BASIC_CALCULATOR_H

// BasicCalculator class declaration
class BasicCalculator {
public:
    // Constructor: Initializes a BasicCalculator object.
    // No parameters are needed for this calculator.
    BasicCalculator();

    // Destructor: Cleans up any resources when the object is destroyed.
    ~BasicCalculator();

    // Performs addition on a and b.
    // Returns the sum.
    int addition(int a, int b) const;

    // Performs subtraction: subtracts b from a.
    // Returns the difference.
    int subtraction(int a, int b) const;
    
    // Performs multiplication on a and b.
    // Returns the product.
    int multiplication(int a, int b) const;

    // Performs division on a by integer b.
    // Returns the quotient. 
    double division(int a, int b) const;

    // Calculates the square root of a.
    // Returns the result.
    double squareRoot(int a) const;

    // Calculates the square of a (a * a).
    // Returns the squared value.
    int square(int a) const;

    // Displays the list of available basic operations to the user.
    void displayMenu() const;
};

#endif

