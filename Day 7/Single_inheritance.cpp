#include<iostream>
using namespace std;
//base class or parent class
class player
{
    public:
    string name;
    
    void setname(string n){
        name = n;
    }
};
//derived class or child class
class cricketer : public player
{
    public:

    int runs;
    void setruns(int r)
    {
        runs = r;
    }
    void show()
    {
        cout<<"Name : " <<name<<endl;
        cout<< "Runs : " <<runs<<endl;

    }
};
int main(){
    int r;
    string name;
    cout<<"Enter name of player : ";
    cin>>name;
    cout<<"enter number of runs:";
    cin>>r;
    cricketer c1;
    c1.setname(name);
    c1.setruns(r);
    c1.show();
    return 0;  
}