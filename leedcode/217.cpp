
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> st;

        for (int i = 0; i < nums.size(); i++) {

            if (st.find(nums[i]) != st.end()) {
                return true;
            }

            st.insert(nums[i]);
        }

        return false;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 3, 1};

    if (obj.containsDuplicate(nums)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}



// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_set<int> st;

//         for (int i = 0; i < nums.size(); i++) {
//             if (st.find(nums[i]) != st.end()) {
//                 return true;
//             }
//             st.insert(nums[i]);
//         }

//         return false;
//     }
// };