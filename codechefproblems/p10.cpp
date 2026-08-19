/*Question 10: Count Digits in a Number

You are given an integer N.
Find the number of digits in N.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int count = 0;
        while (N > 0) {
            count++;
            N /= 10;
        }
        cout << count << endl;
    }
    return 0;
}
