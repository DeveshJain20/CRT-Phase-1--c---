#include <iostream>
using namespace std;

// Base Class or Parent Class of  Cricketer class
class player
{
    public:
    string name;
    void setName(string n)
    {
        name= n;
    }
};

class cricketer : public player
{
    public:
    int runs;
    void setRuns(int r)
    {
        runs = r;
    }
    void show()
    {
        cout<<"Name : " <<name<<endl;
        cout<< "Runs : " <<runs<<endl;
    }
};

class footballer : public player
{
    public:
    int goals;
    void setGoals(int g)
    {
        goals = g;
    }
    void show()
    {
        cout<<"Name : " <<name<<endl;
        cout<< "Goals : " <<goals<<endl;
    }
};

int main()
{
    cricketer c1;
    c1.setName("Virat Kohli");
    c1.setRuns(12000);
    c1.show();

    footballer f1;
    f1.setName("sunil");
    f1.setGoals(85);
    f1.show();
    return 0;
}