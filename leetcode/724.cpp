// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {

//         int total = accumulate(nums.begin(), nums.end(), 0);

//         int leftSum = 0;

//         for(int i = 0; i < nums.size(); i++)
//         {
//             int rightSum = total - leftSum - nums[i];

//             if(leftSum == rightSum)
//                 return i;

//             leftSum += nums[i];
//         }

//         return -1;
//     }
// };
#include <iostream>
#include <vector>
#include <numeric>

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

    // Total sum of array
    int total = accumulate(nums.begin(), nums.end(), 0);

    int leftSum = 0;
    int pivot = -1;

    for(int i = 0; i < n; i++)
    {
        int rightSum = total - leftSum - nums[i];

        if(leftSum == rightSum)
        {
            pivot = i;
            break;
        }

        leftSum = leftSum + nums[i];
    }

    cout << "Pivot Index = " << pivot;

    return 0;
}