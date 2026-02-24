// ex 4 
#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[100];  

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int ans = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}