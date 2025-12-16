#include <iostream>
using namespace std;
//reverse
int main() 

{
    
    int  rem,rev=0,num;
    cin>>num;
    while(num!=0)
    {
       
rem=num%10;
rev=rev*10+rem;
num=num/10;


    }

cout<<rev;
return 0;

}