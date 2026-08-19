/*Question 7: Minimum of Two Numbers

You are given two integers A and B.
Find the minimum of the two numbers.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;
        if (A < B)
            cout << A << endl;
        else
            cout << B << endl;
    }
    return 0;
}
