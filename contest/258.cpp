#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin >> T;

    while (T--) {
        int N, M, K;
cin >> N >> M >> K;

       vector<bool> occupied(N + 1, false);

      
for (int i = 0; i < M; i++) {
            int x;
            cin >> x;
            occupied[x] = true;
        }

     int count = 0;

            for (int seat = 1; seat <= N && count < K; seat++) {
            if (!occupied[seat]) {
                cout << seat << " ";
                occupied[seat] = true;
                count++;
            }
        }

        cout << '\n';
    }

}
