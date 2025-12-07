//primary and secondary diogonal sums ek sath and jo common ayega usko ek bar hi add krenge 

#include <iostream>
using namespace std;
 int daigonalsum(int matrix[][3],int n){
     int sum=0;
      for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j){//pd 
            sum+=matrix[i][j];
        }
        else if(j==n-1-i){//sd
            sum+=matrix[i][j];
        }
    }
      }
   return sum;
 }

 
 
int main()
{
   
   int matrix[3][3]={{ 1, 2 , 3 },{ 4 , 5 , 6 },{ 7, 8 , 9 }};
   int n=3;
  
   cout<<daigonalsum(matrix, n );

    return 0;
}


// only primary diagonal k liye ye htana uper wale se
/* else if(j==n-1-i){//sd
            sum+=matrix[i][j];
        }
*/

