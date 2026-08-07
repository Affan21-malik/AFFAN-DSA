/*


class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long totalSum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            totalSum+=nums[i];
        }
      long long leftSum=0;
       long long minDiff=LLONG_MAX;
       int ans=0;
        for(int i=0;i<nums.size();i++){
           leftSum+=nums[i];
          long long rightSum= totalSum-leftSum;
          int leftAvg= leftSum/(i+1);
          int rightAvg;
          if(i==nums.size()-1){
            rightAvg=0;
          }
          else{
            rightAvg= rightSum/(nums.size()-i-1);
          }

          long long diff = abs(leftAvg-rightAvg);
          if(diff<minDiff){
            minDiff=diff;
            ans=i;
          }

         }

        return ans;
    }
};



*/