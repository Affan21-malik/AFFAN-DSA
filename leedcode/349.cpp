// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

//         set<int> s1(nums1.begin(), nums1.end());
//         set<int> s2(nums2.begin(), nums2.end());

//         vector<int> ans;

//         set_intersection(s1.begin(), s1.end(),
//                          s2.begin(), s2.end(),
//                          back_inserter(ans));

//         return ans;
//     }
// };
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {

    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    vector<int> nums1(n);

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    vector<int> nums2(m);

    cout << "Enter elements of second array: ";
    for (int i = 0; i < m; i++) {
        cin >> nums2[i];
    }

    set<int> s1(nums1.begin(), nums1.end());
    set<int> s2(nums2.begin(), nums2.end());

    vector<int> ans;

    set_intersection(s1.begin(), s1.end(),
                     s2.begin(), s2.end(),
                     back_inserter(ans));

    cout << "Intersection Elements: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}