/*
Problem 5: Simple Calculator
Write a program that takes two numbers and an operator (+, -, *, /). Use a switch-case statement to perform the operation and display the result. Handle invalid operators.
*/
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0) {
                cout << "Result: " << static_cast<double>(num1) / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
    }

    return 0;
}