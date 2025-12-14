#include<iostream>
using namespace std;
int c=45;
int main(){
    //*********build in data types*********** */
   /** int a,b,c;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
     c=a+b;
    cout<<"the sum is :"<<c<<endl;
    //scop resulation is ::
    cout<<"the  global c is :"<<::c;*/
    // /*********float,double and long double Literals *********** */
    /*float d= 32.32f;
    long double e=32.22l;
    cout<<"the size of 32.22 is"<<sizeof (32.22)<<endl;   
    cout<<"the size of 32.22f is"<<sizeof (32.22f)<<endl;
    cout<<"the size of 32.22F is"<<sizeof (32.22F)<<endl;
    cout<<"the size of 32.22L is"<<sizeof (32.22L)<<endl;
    cout<<"the size of 32.22l is"<<sizeof (32.22l)<<endl;
    cout<<"the value of d is:"<<d<<endl<<"the value of e is:"<<e;*/
    // /********* refrences varaible*********** */
    //affan---->boss----->malik--->>shab----->
  /*  float x=455;
    float & y =x;
    cout<<x<<endl;
    cout<<y;*/

// /********* typecasting***********/
int a=45;
float b=45.55;
int c = int(b);
cout<<"this is value of a is "<<float(a)<<endl;
cout<<"this is value of b is "<<int(b)<<endl;
cout<<" c value is  "<<int(c)<<endl;
cout<<"the expression is "<<a+b<<endl;
cout<<"the expression is "<<a+int(b)<<endl;
cout<<"the expression is "<<a+(int)b<<endl;
cout<<"the expression is "<<a+c<<endl;
cout<<"the expression is "<<a+(int)c;

    return 0;

}