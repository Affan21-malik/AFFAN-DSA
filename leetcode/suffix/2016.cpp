/*

 int n = nums.size();

        vector<int> suffixMax(n);

        suffixMax[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suffixMax[i] = max(nums[i], suffixMax[i + 1]);
        }

        int ans = -1;

        for (int i = 0; i < n - 1; i++) {

            int difference = suffixMax[i + 1] - nums[i];

            if (difference > 0) {
                ans = max(ans, difference);
            }
        }

        return ans;

*/

//notebook m explain  h ok 