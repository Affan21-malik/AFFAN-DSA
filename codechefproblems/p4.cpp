/*question -4
Greater Average

You are given three integers A, B, and C.
Determine whether the average of A and B is strictly greater than C.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        if (A + B > 2 * C)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
