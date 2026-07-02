// class Solution {
// public:
//     vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

//         set<int> s1(nums1.begin(), nums1.end());
//         set<int> s2(nums2.begin(), nums2.end());

//         vector<int> ans1, ans2;

//         set_difference(s1.begin(), s1.end(),
//                        s2.begin(), s2.end(),
//                        back_inserter(ans1));

//         set_difference(s2.begin(), s2.end(),
//                        s1.begin(), s1.end(),
//                        back_inserter(ans2));

//         return {ans1, ans2};
//     }
// };
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {

    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 4, 6};

    set<int> s1(nums1.begin(), nums1.end());
    set<int> s2(nums2.begin(), nums2.end());

    vector<int> ans1, ans2;

    set_difference(s1.begin(), s1.end(),
                   s2.begin(), s2.end(),
                   back_inserter(ans1));

    set_difference(s2.begin(), s2.end(),
                   s1.begin(), s1.end(),
                   back_inserter(ans2));

    cout << "[";
    cout << "[";

    for (int i = 0; i < ans1.size(); i++) {
        cout << ans1[i];
        if (i != ans1.size() - 1)
            cout << ",";
    }

    cout << "],[";

    for (int i = 0; i < ans2.size(); i++) {
        cout << ans2[i];
        if (i != ans2.size() - 1)
            cout << ",";
    }

    cout << "]]";

    return 0;
}