/*
Problem 6: Swap Two Numbers
Write a C++ program that takes two integers as input. Swap their values using a temporary variable and display the updated values.
*/
#include <iostream>
using namespace std;

int main () {
    int a, b;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    int temp = a;
    a = b;
    b= temp;
    cout<< "After swapping: " << endl;
    cout << "First integer: " << a << endl;
    cout << "Second integer: " << b << endl;
    return 0;
}