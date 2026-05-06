//write a function with default calling it with or without parameters

#include <iostream>
using namespace std;

// function with default argument
void greet(string name = "Guest") {
    cout << "Hello, " << name << endl;
}

int main() {
    greet("Aman");   // calling with parameter
    greet();         // calling without parameter

    return 0;
}