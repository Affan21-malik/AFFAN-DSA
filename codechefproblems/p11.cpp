//641 problem no
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int num1, num2;
        cin >> num1 >> num2;
        cout << min(num2, num1 - num2) << endl;
    }

    return 0;
}
