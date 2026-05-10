#include<iostream>
using namespace std;
class area{
    public:  
    int length;
    int breadth;

area()
{
    length = 0;
    breadth = 0;
}

area(int length, int b)
{
    this->length = length;
    breadth = b;
}
area(int s)
{
    length = s;
    breadth = s;
}

void show()
{
    cout << "area is : " << length * breadth << endl;
}
};

int main()
{
    area a1;
    area a2(10, 20);
    area a3(5);

    a1.show();
    a2.show();
    a3.show();

    return 0;
}