// class Solution {
// public:
//     bool isHappy(int n) {

//         set<int> s;

//         while (n != 1)
//         {
//             if (s.find(n) != s.end())
//             {
//                 return false;
//             }

//             s.insert(n);

//             int sum = 0;

//             while (n > 0)
//             {
//                 int digit = n % 10;
//                 sum = sum + digit * digit;
//                 n = n / 10;
//             }

//             n = sum;
//         }

//         return true;
//     }
// };

#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    set<int> s;

    while (n != 1)
    {
        if (s.find(n) != s.end())
        {
            cout << "Not Happy Number";
            return 0;
        }

        s.insert(n);

        int sum = 0;

        while (n > 0)
        {
            int digit = n % 10;

            sum = sum + digit * digit;

            n = n / 10;
        }

        n = sum;
    }

    cout << "Happy Number";

    return 0;
}