/*
Question 1: Maximum Discount

Chef is ordering food online and the bill amount is Rs. X.
Chef can use one of the following two coupons:

Get 10 percent off on the bill amount

Get a flat discount of Rs. 100

Determine the maximum discount Chef can avail.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        int d1 = X * 10 / 100;
        int d2 = 100;
        if (d1 > d2)
            cout << d1 << endl;
        else
            cout << d2 << endl;
    }
    return 0;
}
