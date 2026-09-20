/* #include<iostream>
   using namespace std;
   int sum(int a,int b){//parameter
   int s=a+b;
   return s;}
    int minoftwo(int a,int b){
   if(a<b){
       return a;
   }
   else{
       return b;
   }
}
   int main(){
       //cout<<sum(10,5)<<endl;
       // cout<<sum(10,10)<<endl;
cout<<" min is "<<minoftwo(5,3)<<endl;//argument

 return 0;
}*/



// sum of n number 
// sum of n number 
/*#include<iostream>
   using namespace std;
  int sumN(int n){
      int sum=0;
      for(int i=1;i<=n;i++){
          sum+=i;
      }
      return sum;
  }
   int main(){
     cout<<" sum is  "<<sumN(5)<<endl;
     cout<<" sum is  "<<sumN(10)<<endl;
 return 0;
}
*/




//factorial of n number 

#include<iostream>
   using namespace std;
  int factN(int n){
      int fact=1;
      for(int i=1;i<=n;i++){
          fact*=i;
      }
      return fact;
  }
   int main(){
     cout<<" fact is  "<<factN(5)<<endl;
     cout<<" fact is  "<<factN(10)<<endl;
 return 0;
}