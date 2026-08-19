//648
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> f(1, 1);

        for (int i = 2; i <= n; i++) {
            int carry = 0;
            for (int j = 0; j < f.size(); j++) {
                int x = f[j] * i + carry;
                f[j] = x % 10;
                carry = x / 10;
            }
            while (carry) {
                f.push_back(carry % 10);
                carry /= 10;
            }
        }

        for (int i = f.size() - 1; i >= 0; i--)
            cout << f[i];
        cout << endl;
    }
    return 0;
}
