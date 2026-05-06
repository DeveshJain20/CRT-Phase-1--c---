/*
Problem 8: Sum and Average
Write a C++ program that takes three integers as input.
Calculate and display their sum and average.
*/
#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    cout << "Enter first integer: ";
    cin >> a; 
    cout << "Enter second integer: ";
    cin >> b;
    cout << "Enter third integer: ";
    cin >> c;

    int sum = a + b + c;
    double average = sum / 3.0;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}