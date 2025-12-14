#include <iostream>
using namespace std;
// sum of given number use while loop

int main() 

{
    
    int rem,sum=0, num;
    cin>>num;
    while(num!=0)
    {
       
rem=num%10;
sum=sum+rem;
num=num/10;


    }

cout<<sum;
return 0;

}
