/*
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long totalSum=0;
        for(int i =0; i<nums.size();i++){
            totalSum= totalSum+nums[i];
        }
        long long leftSum=0;
        int count =0;
        for(int i=0; i<nums.size()-1;i++){
           
            long long rightSum= totalSum-leftSum-nums[i];

            if (leftSum + nums[i] >= rightSum) {
                count++;
            }

            leftSum += nums[i];
        }

        return count;


        
    
    }
};
*/