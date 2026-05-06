/*
Problem 1: Temperature Conversion
Write a C++ program that takes a temperature in Celsius as input,
converts it to Fahrenheit, and prints the result.
*/


#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    return 0;

}