// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {

//         for(int i = 1; i < nums.size(); i++)
//         {
//             nums[i] = nums[i] + nums[i-1];
//         }

//         return nums;
//     }
// };

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // Running Sum
    for(int i = 1; i < n; i++)
    {
        nums[i] = nums[i] + nums[i - 1];
    }

    cout << "Running Sum: ";

    for(int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}