#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    double avg;

    //paramterized constructor
    cricketer(string n, int r, double a){
        name = n;
        runs = r;
        avg = a;
    }
    void display(){
        cout << "name:" << name << endl;
        cout << "runs:" << runs << endl;
        cout << "average:" << avg << endl;
    }
};
int main(){
    cricketer c1("sachin", 10000, 50.0);
    c1.display();
    return 0; 
}