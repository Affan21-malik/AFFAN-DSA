// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

//         unordered_map<int, int> mp;
//         stack<int> st;

//         // Find Next Greater Element for every element in nums2
//         for (int i = nums2.size() - 1; i >= 0; i--) {

//             while (!st.empty() && st.top() <= nums2[i]) {
//                 st.pop();
//             }

//             if (st.empty()) {
//                 mp[nums2[i]] = -1;
//             } else {
//                 mp[nums2[i]] = st.top();
//             }

//             st.push(nums2[i]);
//         }

//         // Build answer for nums1
//         vector<int> ans;

//         for (int i = 0; i < nums1.size(); i++) {
//             ans.push_back(mp[nums1[i]]);
//         }

//         return ans;
//     }
// };




#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> mp;
        stack<int> st;

        for (int i = nums2.size() - 1; i >= 0; i--) {

            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            if (st.empty()) {
                mp[nums2[i]] = -1;
            } else {
                mp[nums2[i]] = st.top();
            }

            st.push(nums2[i]);
        }

        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {
            ans.push_back(mp[nums1[i]]);
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    vector<int> ans = obj.nextGreaterElement(nums1, nums2);

    cout << "Output: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}