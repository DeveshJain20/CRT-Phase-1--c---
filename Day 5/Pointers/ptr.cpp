#include<iostream>
using namespace std;


int main() {

    int a= 5;
    int *ptr =&a;
    *ptr = 10;
    cout <<"address:" <<ptr <<endl;

    cout <<"value:"<< *ptr << endl;

    *ptr= 20;
    cout <<"value:" << *ptr << endl;
    cout <<"value:" << a << endl;

    return 0;

}