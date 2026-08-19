/*
Question 6: Even or Odd Number

You are given an integer N.
Determine whether the number is EVEN or ODD.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        if (N % 2 == 0)
            cout << "EVEN" << endl;
        else
            cout << "ODD" << endl;
    }
    return 0;
}
