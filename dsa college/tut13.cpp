#include<iostream>
   using namespace std;

   int main(){
    int i=0;
//ARRAY USE AND AFTER WE USE ARRAY IN FOR LOOP WHILE LOOP DO WHILE LOOP


/*int marks[4]={23,34,45,56};
cout<<marks[0]<<endl;
// you can change the value of an array
marks[1]=55;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;*/
//2nd step
/*int mathmarks[3]={13,14,38};
cout<<"these are math marks for med1,med2,med3"<<endl;
cout<<mathmarks[0]<<endl;
cout<<mathmarks[1]<<endl;
cout<<mathmarks[2]<<endl;*/
//for loop
/*int marks[4]={23,34,45,56};
for(i=0;i<4;i++){
    cout<<"the value of marks   "<< i << " is "<<marks[i]<<endl;
}*/
/*while loop
int marks[4]={23,34,45,56};
while(i<4)
{
    cout<< "the value of "<< i <<" is  "<< marks[i]<<endl;
    i++;
}*/
// do while loop
int marks[4]={23,34,45,56};
do{
    cout<<"the value of  "<< i <<" is "<<marks[i]<<endl;
    i++;
}
while(i<4);

 return 0;
}