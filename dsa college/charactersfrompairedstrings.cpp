#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> s(N);
    for (int i = 0; i < N; i++) {
        cin >> s[i];
    }

    int half = N / 2;

    for (int i = 0; i < half; i++) {
        string front = s[i].substr(0, i + 1);  
        string back = s[N - 1 - i].substr( s[N - 1 - i].length() - (i + 1) ); 
        
        cout << front + back << " ";
    }

    return 0;
}
