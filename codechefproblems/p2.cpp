/*Question 2: Rain in Chefland

In Chefland, rainfall is measured in millimetres per hour.
Chef categorises rainfall as:

LIGHT if rainfall is less than 3

MODERATE if rainfall is at least 3 and less than 7

HEAVY if rainfall is at least 7

Given rainfall X, determine the category.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        if (X < 3)
            cout << "LIGHT" << endl;
        else if (X < 7)
            cout << "MODERATE" << endl;
        else
            cout << "HEAVY" << endl;
    }
    return 0;
}
