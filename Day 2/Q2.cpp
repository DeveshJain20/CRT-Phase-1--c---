/*2. WAP that takes an integer input representing a person age use an else if laddler determine and print 
a) eligible to vote if age is 100 and more in century category. 
b) eligible to vote 18-99. 
c) not eligible to vote if age is between 0 to 17.   
d) invalid, if negative. 
*/
 
#include <iostream> 
using namespace std; 
 
int main() { 
   int age; 
 
   cout << "Enter your age: "; 
   cin >> age; 
 
   if (age <= 0) { 
       cout << "invalid age" << endl; 
   } else if(age >= 100){ 
       cout << "eligible to vote in century category" << endl; 
   } else if(age > 0 && age < 17){ 
       cout << "not eligible to vote"<< endl; 
   } else if(age >= 18 && age <= 99){ 
       cout << "eligible to vote"<< endl; 
   } 
 
   return 0; 
} 