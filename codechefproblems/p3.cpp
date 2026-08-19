/*question -3
Janmansh and Assignments

Janmansh has to submit 3 assignments before 10 PM.
He starts doing the assignments at X PM.
Each assignment takes 1 hour.

Determine whether Janmansh can complete all assignments on time.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        if (X <= 7)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
