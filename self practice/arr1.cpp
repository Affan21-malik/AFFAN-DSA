#include <iostream>
#include<climits>
using namespace std;
int main()
{
   int nums[5]={5,27,88,66,6};
   int size =5;
   int smallest =INT_MAX;
   for(int i=0;i<size;i++){
     if(nums[i]<smallest){
         smallest =nums[i];
     }  
   }
 cout<<"smallest is "<<smallest<<endl;
    return 0;
}