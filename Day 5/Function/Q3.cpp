//Write a program that apply 10% discount using reference bill and print the updated bill
#include <iostream>
using namespace std;


void applyDiscount(double &bill) {
    bill = bill - (bill * 0.10);
}



int main() {
    double bill;

    cout << "Enter the bill amount: ";
    cin >> bill;

    // Apply 10% discount
    applyDiscount(bill);

    cout << "Updated bill after 10% discount: " << bill << endl;

    return 0;
}