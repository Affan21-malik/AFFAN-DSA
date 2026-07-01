// class Solution {
// public:
//     void sortColors(vector<int>& nums) {

//         int n = nums.size();

//         int count0 = 0;
//         int count1 = 0;
//         int count2 = 0;

//         // Count 0s, 1s and 2s
//         for(int i = 0; i < n; i++) {
//             if(nums[i] == 0)
//                 count0++;
//             else if(nums[i] == 1)
//                 count1++;
//             else
//                 count2++;
//         }

//         int idx = 0;

//         // Fill all 0s
//         for(int i = 0; i < count0; i++) {
//             nums[idx++] = 0;
//         }

//         // Fill all 1s
//         for(int i = 0; i < count1; i++) {
//             nums[idx++] = 1;
//         }

//         // Fill all 2s
//         for(int i = 0; i < count2; i++) {
//             nums[idx++] = 2;
//         }
//     }
// };







// class Solution {
// public:
//     void sortColors(vector<int>& nums) {

//         int n = nums.size();

//         int low = 0;
//         int mid = 0;
//         int high = n - 1;

//         while (mid <= high) {

//             if (nums[mid] == 0) {
//                 swap(nums[low], nums[mid]);
//                 low++;
//                 mid++;
//             }

//             else if (nums[mid] == 1) {
//                 mid++;
//             }

//             else {
//                 swap(nums[mid], nums[high]);
//                 high--;
//             }
//         }
//     }
// };

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//     }
// };



#include <iostream>
#include <vector>
#include <algorithm>   // swap() ke liye
using namespace std;

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements (0, 1, 2): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high) {

        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }

        else if (nums[mid] == 1) {
            mid++;
        }

        else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }

    cout << "\nSorted Array: ";

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}