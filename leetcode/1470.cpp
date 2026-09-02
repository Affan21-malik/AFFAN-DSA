/*
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
    vector<int>ans;
    for(int i=0; i<n;i++){
        ans.push_back(nums[i]);
         ans.push_back(nums[i+n]);

    }
    return ans;

    }
};




// bina library k ok

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> ans(2 * n);

        int j = 0;

        for(int i = 0; i < n; i++) {
            ans[j] = nums[i];
            j++;

            ans[j] = nums[i + n];
            j++;
        }

        return ans;
    }
};
*/