// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {

//         set<int> s;

//         for(int x : nums)
//         {
//             s.insert(x);
//         }

//         vector<int> ans;

//         for(int i = 1; i <= nums.size(); i++)
//         {
//             if(s.find(i) == s.end())
//             {
//                 ans.push_back(i);
//             }
//         }

//         return ans;
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

    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    set<int> s;

    // Insert all elements into set
    for(int x : nums)
    {
        s.insert(x);
    }

    vector<int> ans;

    // Find missing numbers
    for(int i = 1; i <= n; i++)
    {
        if(s.find(i) == s.end())
        {
            ans.push_back(i);
        }
    }

    cout << "Missing Numbers: ";

    if(ans.size() == 0)
    {
        cout << "None";
    }
    else
    {
        for(int x : ans)
        {
            cout << x << " ";
        }
    }

    return 0;
}