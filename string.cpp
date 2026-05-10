#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1 = "hello";
    string str2 = "jecrc";
    cout << str1 << " " << str2 << endl;


    // methods of string

    //length of string

int n = str1.length();
cout<< "length of string is : " << n <<endl;
//2 append string 
cout <<"after appending string is: " << str1.append("students") <<endl;
// 3 empty string 
cout <<" is string empty:" <<  str2.empty() << endl;
// 4 concatenate string 
cout << "after concatenation of string is :" << str1 + "bacho"<<endl;
cout <<"after concatenation of string 2 is : " << str1 <<endl;
//5 push-back method
str2.push_back('D');
cout <<"after push-back() string is : " << str2 <<endl; //jecrcD
//6 pop-back() method 
str2.pop_back();
cout <<"after pop-back() method:" <<str2 <<endl; //jecrc
// 7 find() method
int index = str1.find("ello");
cout << "index of 'ello' in str1:" <<index <<endl;
// 8 at method. str[1];
char ch = str1.at(1);
cout<< "character at index 1 in str1:" <<ch <<endl;
// 9 swap() method
str1.swap(str2);
cout<< "after swapping str1 and str2:"<< endl;
cout <<"str1: " << str1 << endl;  //jecrc
cout <<"str2: " << str2 << endl; //hellostudents

//10 substr() method 
string substr = str2.substr(5,6);  //5 is index and 6 is total lngth of substring
cout << "substring of str2 from index 5 with length 6:" << substr <<endl;

// 11 getline() method 
string str3;
//cin >> str3;
getline(cin, str3);
cout << "you entered:" << str3 <<endl;

return 0;

}
