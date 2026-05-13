/*WAP to create a student management system where we store and display student details 
1. namespace
2. Roll number
3. Email 
4. reg no.
5. phone no.
6. marks
*/


#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    string email;
    int regNo;
    string phoneNo;
    float marks;

    // Function to input student details
    void input() {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Email: ";
        cin >> email;

        cout << "Enter Registration Number: ";
        cin >> regNo;

        cout << "Enter Phone Number: ";
        cin >> phoneNo;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student details
    void display() {
        cout << "\n----- Student Details -----" << endl;
        cout << "Name            : " << name << endl;
        cout << "Roll Number     : " << rollNo << endl;
        cout << "Email           : " << email << endl;
        cout << "Registration No.: " << regNo << endl;
        cout << "Phone Number    : " << phoneNo << endl;
        cout << "Marks           : " << marks << endl;
    }
};

int main() {
    Student s;

    s.input();
    s.display();

    return 0;
}