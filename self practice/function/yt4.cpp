/*#include<iostream>
   using namespace std;
   int sum(int a,int b){
    return a+b;
   }

   int main(){
    int x=5,y=6;
    cout<<" sum is "<<sum(x,y)<<endl;

 return 0;
}*/



/*#include <iostream>
using namespace std ;
void changex(int x){
    x=2*x;
    cout<<x<<endl;
}
int main()
{
int  x=5;
changex(x);
   cout<< "x is "<<x<<endl;

    return 0;
}*/





/*#include <iostream>
using namespace std ;
int sumofdigits(int num){
    int digsum=0;
    while(num>0){
         int lastdig=num%10;
        num/=10;
        digsum+=lastdig;
        
    }
    return digsum;
}
 
int main()
{

   cout<< "sum is "<<sumofdigits(1234)<<endl;

    return 0;
}*/







#include <iostream>
using namespace std ;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *=i;
        
    }
        
   
    return fact;
}
int ncr(int n, int r){
   int fact_n=fact(n);
   int fact_r=fact(r);
   int fact_nmr=fact(n-r);// nmr means n minus r
   
       return fact_n/(fact_r*fact_nmr);}
 
int main()
{
int n=8,r=2;
    cout<<ncr(n,r)<<endl;
  

    return 0;
}