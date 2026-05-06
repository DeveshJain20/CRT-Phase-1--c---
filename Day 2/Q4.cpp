/*4. write a c++ program that takes 2 integer as a input from the user. Find the minimum of using tenary conditional operator.*/

#include<iostream>
using namespace std;

int main(){
  int a, b, min;
  
  cout << "enter 2 integer:";
  cin>>a>>b;

  min =a,b ? a:b;
  cout << "minimum is:" <<min<< endl;

  return 0;

}
