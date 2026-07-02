// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {

//         set<int> s;

//         for (int x : nums)
//         {
//             s.insert(x);
//         }

//         for (int i = 0; i <= nums.size(); i++)
//         {
//             if (s.find(i) == s.end())
//             {
//                 return i;
//             }
//         }

//         return -1;
//     }
// };

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    set<int> s;

    // Insert all elements into set
    for (int x : nums)
    {
        s.insert(x);
    }

    int ans = -1;

    // Find missing number
    for (int i = 0; i <= n; i++)
    {
        if (s.find(i) == s.end())
        {
            ans = i;
            break;
        }
    }

    cout << "Missing Number = " << ans << endl;

    return 0;
}