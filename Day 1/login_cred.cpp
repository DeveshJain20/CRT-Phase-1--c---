/*
Problem 9: Login Credential Mockup
Write a program that checks user login credentials. Compare user input ID and PIN with predefined values and display whether access is granted or denied.
*/
#include<iostream>
using namespace std;

int main() {
    const int storedID = 1234;
    const int storedPIN = 123;

      int id, pin;
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter PIN: ";
    cin >> pin;

    bool access = (id == storedID) && (pin == storedPIN);

    cout << "Access Granted: " << access << endl;
    cout << "Access Denied: " << !access << endl;
    
    return 0;
}