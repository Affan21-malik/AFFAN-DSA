// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int count = 0;
//         int maxcount = 0;

//         for (int num : nums) {
//             if (num == 1) {
//                 count++;
//                 maxcount = max(maxcount, count);
//             } else {
//                 count = 0;
//             }
//         }

//         return maxcount;
//     }
// };  
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxcount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                maxcount = max(maxcount, count);
            } else {
                count = 0;
            }
        }

        return maxcount;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 1, 0, 1, 1, 1};

    cout << "Maximum Consecutive Ones = "
         << obj.findMaxConsecutiveOnes(nums) << endl;

    return 0;
}