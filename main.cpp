/*
Dylan Phillips 
T00750910 
COMP 3141 
Project 

This driver implements a user-interactive calculator that lets users select between basic and scientific modes, it
performs various operations based on user input, and allows switching between modes or quitting without restarting the program.

To Compile use: g++ main.cpp BasicCalculator.cpp ScientificCalculator.cpp -o Calculator
Then run: ./Calculator

*/

#include <iostream>
#include <limits>
#include "BasicCalculator.h"
#include "ScientificCalculator.h"

using namespace std;

// Function to display the main menu where the user selects calculator mode or exit
void displayMainMenu() {
    cout << "=======================================" << endl;
    cout << "        WELCOME TO THE CALCULATOR      " << endl;
    cout << "=======================================" << endl;
    cout << " [1] Basic Calculator" << endl;
    cout << " [2] Scientific Calculator" << endl;
    cout << " [3] Quit" << endl;
    cout << "=======================================" << endl;
    cout << " Your choice: ";
}

// Function to safely input an integer
int getValidInt() {
    int value;
    while (!(cin >> value)) {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }
    return value;
}

// Function to safely input a double
double getValidDouble() {
    double value;
    while (!(cin >> value)) {
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return value;
}

int main() {
    // Instantiate BasicCalculator object
    BasicCalculator basicCalc;   
    // Instantiate ScientificCalculator object          
    ScientificCalculator sciCalc; 
     // Variable to store user choice of mode         
    int modeChoice = 0;                    

    // Infinite loop to keep program running until user chooses to quit
    while (true) {
        // Show main menu
        displayMainMenu();     
        // Take the user's choice            
        modeChoice = getValidInt();               

        // Quit option 
        if (modeChoice == 3) {
            cout << "Thank you for using the Calculator. Goodbye!" << endl;
            break;                       
        }

        // Basic Calculator mode
        if (modeChoice == 1) {
            
            char operation;               
            int num1, num2;              
            double result;     

            // Loop to keep basic calculator running until user quits or switches mode
            while (true) {
                cout << "-----------------------------------" << endl;
                cout << " BASIC CALCULATOR MODE" << endl;
                cout << "-----------------------------------" << endl;
                cout << "Enter operation (+, -, *, /, s=Square, r=SquareRoot), m to switch mode, or q to quit: ";
                cin >> operation;

                // Quit program immediately
                if (operation == 'q') exit(0);  
                // Break inner loop to switch mode
                if (operation == 'm') break;    

                // Operations requiring two numbers
                if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
                    cout << "Enter two numbers: ";
                    num1 = getValidInt();
                    num2 = getValidInt();
                } 
                // Operations requiring one number (square or square root)
                else if (operation == 's' || operation == 'r') {
                    cout << "Enter one number: ";
                    num1 = getValidInt();
                } 
                else {
                    cout << "Invalid. Try again." << endl;
                    continue;  
                }

                // Perform the selected basic operation using the BasicCalculator object
                switch(operation) {
                    case '+': result = basicCalc.addition(num1, num2); break;
                    case '-': result = basicCalc.subtraction(num1, num2); break;
                    case '*': result = basicCalc.multiplication(num1, num2); break;
                    case '/': result = basicCalc.division(num1, num2); break;
                    case 's': result = basicCalc.square(num1); break;
                    case 'r': result = basicCalc.squareRoot(num1); break;
                    default: cout << "Unknown!" << endl; continue;
                }

                // Display the result
                cout << "Result: " << result << endl;  
            }
        }
        // Scientific Calculator mode
        else if (modeChoice == 2) {
            char sciOperator;                  
            double num1, num2, result;   

            // Loop to keep scientific calculator running until quit or mode switch
            while (true) {
                cout << "-----------------------------------" << endl;
                cout << " SCIENTIFIC CALCULATOR MODE" << endl;
                cout << "-----------------------------------" << endl;
                cout << "Enter operation (n=Sine, c=Cosine, t=Tangent, p=Power, l=Log, e=Exp), m to switch mode, or q to quit: ";
                cin >> sciOperator;

                // Quit program immediately
                if (sciOperator == 'q') exit(0);  
                 // Switch to other mode
                if (sciOperator == 'm') break;   

                // Operations that require one input number
                if (sciOperator == 'n' || sciOperator == 'c' || sciOperator == 't' || sciOperator == 'l' || sciOperator == 'e') {
                    cout << "Enter number: ";
                    num1 = getValidDouble();
                } 
                // Power operation requires two inputs: base and exponent
                else if (sciOperator == 'p') {
                    cout << "Enter base and exponent: ";
                    num1 = getValidDouble();
                    num2 = getValidDouble();
                } 
                else {
                    cout << "Invalid." << endl;
                    continue;  
                }

                // Perform the selected scientific operation
                switch(sciOperator) {
                    case 'n': result = sciCalc.sine(num1); break;
                    case 'c': result = sciCalc.cosine(num1); break;
                    case 't': result = sciCalc.tangent(num1); break;
                    case 'p': result = sciCalc.power(num1, num2); break;
                    case 'l': result = sciCalc.logarithm(num1); break;
                    case 'e': result = sciCalc.exponential(num1); break;
                }
                // Show the result
                cout << "Result: " << result << endl;  
            }
        }
        // Invalid menu choice handling
        else {
            cout << "Invalid selection. Please choose 1, 2 or 3." << endl;
        }
    }

    return 0;
}