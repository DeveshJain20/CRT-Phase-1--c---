/*WAP to create a student class with name,& roll number as data members and member functions to input and display the student details using OOPS concept*/
#include <iostream>
using namespace std;
    class student {
     private:
        int reg_no = 100; // private data member
    
    public:
        string name;
        string roll_number;
        
        //member function
        void display() {
            cout << "Name of the student: " << name << endl;
            cout << "Roll Number: " << roll_number << endl;
            cout << "Registration Number: " << reg_no << endl;
            reg_no++; // Incrementing the registration number for the next student
        }

          
    };

    int main() {
        student s1;
        s1.name = "Devesh Jain";
        s1.roll_number = "23bcon1174";
        s1.display();
        return 0;
}
