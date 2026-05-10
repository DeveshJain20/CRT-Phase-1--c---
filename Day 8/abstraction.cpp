#include<iostream>
using namespace std;
class ATM
{
    private:
    int balance;

    public:
    
    ATM(int balance)
    {
        this->balance = balance;
    }
    void withdraw(int amount)
    {
        if (amount > 10000)
        {
            cout<<"insuffient balance"<<endl;
        }else
        {
            balance -= amount;
            cout<<"amount withdrawn: "<<amount<<", remaining balance: "<<balance<<endl;
        }
    }

void showbalance()
{
    cout<<"current balance: "<<balance<<endl;
}
};
int main()
{
    ATM a(5000);
a.showbalance();
a.withdraw(500);
a.showbalance();

return 0;
}