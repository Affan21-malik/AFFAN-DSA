#include<iostream>
#include<iomanip>
using namespace std;
int main(){

  /*  int a=45;
    cout<<"the value of a was "<<a<<endl;
    a=20;
    cout<<"the value of a is "<<a;  */
    //*********constants in c++
    /* const int a=45;
    cout<<"the value of a was "<<a<<endl;
    a=20;   we will get error because of A is a constant
    cout<<"the value of a is "<<a; */


    /* manipulator in c++
    int a=5 ,b=456 ,c=437;
    cout<<"the value of a without setw is : "<<a<<endl;
    cout<<"the value of b without setw is : "<<b<<endl;
    cout<<"the value of c without setw is : "<<c<<endl;


    cout<<"the value of a setw is : "<<setw(5)<<a<<endl;
    cout<<"the value of b setw is : "<<setw(5)<<b<<endl;
    cout<<"the value of c setw is : "<<setw(5)<<c<<endl;  */

    //operator precendence  
     int a=5,b=6;
   // int c= (a*5)+b;
   int c=((((a*5)+b)-45)+87);
    cout<<c;

    return 0;
}