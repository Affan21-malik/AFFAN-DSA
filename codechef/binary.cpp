// ex 3 

#include <iostream>
using namespace std;

int main() {

    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    int tar = 12;
    int st = 0;
    int end = 6;
    int ans = -1;   

    while (st <= end) {

        int mid = st + (end - st) / 2;

        if (tar > arr[mid]) {
            st = mid + 1;
        }
        else if (tar < arr[mid]) {
            end = mid - 1;
        }
        else {
            ans = mid;
            break;   
        }
    }

    cout << ans << endl;

    return 0;
}

