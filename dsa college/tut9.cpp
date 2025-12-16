#include<iostream>
//tut7 is example of sequense structure
using namespace std;
int main(){
    // this is selection structure if,elseif,else and loops structure age pdhenge**********  OK
int age;
cout<<"enter the age";
cin>>age;
/*if((age<18)&&(age>1)){
cout<<"you not allow to comme party";
}
else if(age==18)
{
cout<<"you are kid but can allow when you have a kid pas";
}
else if(age<1){ 
    cout<<"you are not born";
}
else{

cout<<"you are allow and enjoy the party";
}*/
// this is selection structure use switch case
switch ( age )
{
case 18:
cout<<"you are 18"<<endl;
break;
case 33:
cout<<"you are 33"<<endl;
break;
case 24:
cout<<"you are 24"<<endl;
break;
 default :
 cout<<"no special cases"<<endl;
 break;}
 cout<<"done with switch cases";


 





return 0;



}