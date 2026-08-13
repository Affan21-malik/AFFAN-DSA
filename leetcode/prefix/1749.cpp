/*
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
       int sum = 0;
        int maxSum = 0;
        int minSum = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            ans = max(ans, abs(sum - minSum));
            ans = max(ans, abs(sum - maxSum));

            maxSum = max(maxSum, sum);
            minSum = min(minSum, sum);
        }
        return ans;
    }
   
};

// khudsa
/*
 int ans=0;
        for(int l=0;l<nums.size();l++){
            int sum=0;
            for(int r=l;r<nums.size();r++){
                sum+=nums[r];
                ans=max(ans,abs(sum));
            }
            
        }
        
        
         return ans;
*/

