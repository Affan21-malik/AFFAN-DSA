// cin kreke word ko reverse kra ha
/*
#include <bits/stdc++.h>
using namespace std;

string reverseword(string s) {
    int n = s.length();
    string ans = "";

    reverse(s.begin(), s.end());

    for (int i = 0; i < n; i++) {
        string word = "";

        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }

        reverse(word.begin(), word.end());

        if (word.length() > 0) {
            ans += " " + word;
        }
    }

    return ans.substr(1);
}

int main() {
    string s;
    getline(cin, s);

    cout << reverseword(s);

    return 0;
}
*/


// cout krke kra same bilkul

#include <bits/stdc++.h>
using namespace std;

string reverseword(string s) {
    int n = s.length();
    string ans = "";

    reverse(s.begin(), s.end());

    for (int i = 0; i < n; i++) {
        string word = "";

        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }

        reverse(word.begin(), word.end());

        if (word.length() > 0) {
            ans += " " + word;
        }
    }

    return ans.substr(1);
}

int main() {
    string s = "I love coding";   // hard-coded input
    cout << reverseword(s);
    return 0;
}


