#include<iostream>
using namespace std;
class cricketers{

string name;
int runs;

public:


//parameterized constructor
cricketers( const cricketers int r){
    this->name = name;
    runs = r;
}
//copy constructor
cricketers(cont cricketers &c){
    this->name = c.name;
    this->runs = c.runs;
}
void display(){
    cout << "name:" << name << endl;
    cout << "runs:" << runs << endl;
}
};
int main(){
    cricketers c1("sachin", 10000);
    cricketers c2(c1); //copy constructor is called
    c2.display();
    return 0;
}