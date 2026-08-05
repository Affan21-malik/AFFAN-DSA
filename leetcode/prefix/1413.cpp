/*
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        int currentPrefix=0;
        int minimumPrefix=0;
        for(int i =0;i<n;i++){
            currentPrefix+=nums[i];
             minimumPrefix=min(minimumPrefix,currentPrefix);


        }
        int ans=1-minimumPrefix;
        return ans;
        
    }
};
*/