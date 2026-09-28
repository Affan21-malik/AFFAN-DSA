/* binary search approach


class Solution {
public:
    bool isPerfectSquare(int num) {
   int low=1;
   int high=num;
   while(low<=high){
    long long mid= low+(high-low)/2;
    if((mid*mid)==num){
        return true;
    }
    else if((mid*mid)<num){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
   }
   return false;

        
    }
};


*/






/* normal approach 

class Solution {
public:
    bool isPerfectSquare(int num) {

     for(int i=0;i<=num;i++){
        
        if((i*i)==num){
            return true;
        }
        
     }
            return false;
        
        
    }
};

*/