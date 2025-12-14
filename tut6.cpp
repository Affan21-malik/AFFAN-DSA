//there are two types of header files
//1 is system header files >> it comes with compiler
// 2 is user defined header  >> this written by programmer
#include<iostream>
using namespace std;
int main(){
    int a=8,b=7;
    cout<<"operator in c++"<<endl;
     cout<<"followings Are types of operator in c++"<<endl;
     //arithmatic operator
    cout<<"the value of a+b "<<a+b<<endl;
    cout<<"the value of a-b "<<a-b<<endl;
    cout<<"the value of a*b "<<a*b<<endl;
    cout<<"the value of a/b "<<a/b<<endl;
    cout<<"the value of a%b "<<a%b<<endl;
    cout<<"the value of a++ "<<a++<<endl;
    cout<<"the value of ++a "<<++a<<endl;
    cout<<"the value of a-- "<<a--<<endl;
    cout<<"the value of --a "<<--a<<endl;
    cout<<endl;
    //assignment operator
    // int a=8,b=8;
    // char d='d'
    //comparison operator
    cout<<"following comparison are "<<endl;
    cout<<"the value of a==b  "<<(a==b)<<endl;
    cout<<"the value of a<=b  "<<(a<=b)<<endl;
    cout<<"the value of a>=b  "<<(a>=b)<<endl;
    cout<<"the value of a!=b  "<<(a!=b)<<endl;
    cout<<"the value of a<b   "<<(a<b)<<endl;
    cout<<"the value of a>b    "<<(a>b)<<endl;
    //logical operator
    cout<<"following logical operator are "<<endl;
    cout<<"the value of logical and operator is ((a==b) && (a>b))  "<<((a==b) && (a>b))<<endl;
     cout<<"the value of logical or operator is ((a==b) || (a>b))  "<<((a==b) || (a>b))<<endl;
     cout<<"the value of logical not operator is ((a==b)  "<<!(a==b)<<endl;
    

    
    return 0;
}