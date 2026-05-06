//write aprogram to swap 2 numbers using pointer
#include <iostream>
using namespace std;

void swapNUM(int *a, int *b) {
    int Z = *a;
    *a = *b;
    *b = Z;
}

int main() {
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    cout << "Before: " << a << " " << b << endl;

    swapNUM(&a, &b);

    cout << "After: " << a << " " << b << endl;

    return 0;
}
