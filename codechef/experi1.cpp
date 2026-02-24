#include <iostream>
using namespace std;

int main() {
    int arr[6];
    int sum = 0;
    int product = 1;

    cout << "Enter 6 elements: ";

    
    for(int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < 6; i++) {
        sum = sum + arr[i];
        product = product * arr[i];
    }

    cout << "sum = " << sum << endl;
    cout << "Product  = " << product << endl;

    return 0;
}