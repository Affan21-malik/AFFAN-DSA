/* question -5
Palindrome String

Given a string S, check whether it is a palindrome.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    string R = S;
    reverse(R.begin(), R.end());
    if (S == R)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}
