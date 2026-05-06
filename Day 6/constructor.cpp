#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    // Default Constructor
    Student() {
        name = "Rahul";
        rollNo = 101;
        marks = 85.5;
    }

    // Function to display details
    void display() {
        cout << "Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;   // Default constructor called automatically

    s.display();

    return 0;
}