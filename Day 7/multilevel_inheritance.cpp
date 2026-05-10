#include <iostream>
using namespace std;

// Base Class or Parent Class of  Cricketer class
class player
{
    public:
    string name;
    void setname(string n)
    {
        name= n;
    }
};

//derived class or child class from player class
//base class or parent class of  indiancricketer class
class cricketer : public player
{
    public:
    int runs;
    void setruns(int r)
    {
        runs = r;
    }
};
