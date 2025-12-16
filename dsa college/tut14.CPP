#include<iostream>
   using namespace std;

   int main(){
   int i= 0;
   
   int marks[4]={23,34,45,56};
   int* p=marks;
   cout<<* (p++)<<endl;
    cout<<* (++p)<<endl;
  /* cout<<" the of vaulue of marks[o]  is  "<<*p <<endl;
   cout<<" the of vaulue of marks[1]  is  "<<*(p+1) <<endl;
   cout<<" the of vaulue of marks[2]  is  "<<*(p+2) <<endl;
   cout<<" the of vaulue of marks[3]  is  "<<*(p+3) <<endl;*/



 return 0;
}