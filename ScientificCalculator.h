/*
This header file declares the ScientificCalculator class with constructor, destructor, 
and member functions for common scientific calculations such as trigonometric functions, 
exponentiation, logarithm and a menu display method.

*/
#ifndef SCIENTIFIC_CALCULATOR_H
#define SCIENTIFIC_CALCULATOR_H

class ScientificCalculator {
public:
     // Constructor: initializes a ScientificCalculator object.
    ScientificCalculator();    
    // Destructor: cleans up when the object is destroyed.
    ~ScientificCalculator();   

    // Functions to perform various scientific calculations:

    // Returns the sine of the given angle (in radians).
    double sine(double angle) const;

    // Returns the cosine of the given angle (in radians).
    double cosine(double angle) const;

    // Returns the tangent of the given angle (in radians).
    double tangent(double angle) const;

    // Returns the result of raising 'base' to the power of 'exponent'.
    double power(double base, double exponent) const;

    // Returns the logarithm (base e) of the given value.
    double logarithm(double value) const;

    // Returns e raised to the power of the given value.
    double exponential(double value) const;

    // Displays the list of available scientific calculator operations to the user.
    void displayMenu() const;
};

#endif

