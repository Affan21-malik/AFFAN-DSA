/*
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;

        merge(nums1.begin(), nums1.end(),
              nums2.begin(), nums2.end(),
              back_inserter(ans));

        int n = ans.size();

        if (n % 2 != 0) {
            return ans[n / 2];
        } else {
            return (ans[n / 2 - 1] + ans[n / 2]) / 2.0;
        }
    }
};
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {

    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    vector<int> ans;

    merge(nums1.begin(), nums1.end(),
          nums2.begin(), nums2.end(),
          back_inserter(ans));

    int n = ans.size();

    double median;

    if (n % 2 != 0) {
        median = ans[n / 2];
    }
    else {
        median = (ans[n / 2 - 1] + ans[n / 2]) / 2.0;
    }

    cout << "Merged Array: ";
    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;
    cout << "Median = " << median << endl;

    return 0;
}