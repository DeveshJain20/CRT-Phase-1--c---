/*3. write a c++ program that takes a three distinct integer as input and find the largest amog them using nested conditional statement. 
*/
#include<iostream>
using namespace std;

int main() { 
    
    int a,b,c; 

cout << "enter 3 distinct integer: "; 
cin >>a>>b>>c; 
 
if(a>b){ 
   if(a>c){ 
       cout << "largest is :" << a << endl; 
   }else{ 
       cout << "largest is :" << c << endl; 
   } 
}else{ 
   if(b>c){ 
       cout << "largest is:" << b << endl; 
   }else{ 
       cout << "largest is:" << c << endl; 
   } 
} 
 
return 0; 
 

} 