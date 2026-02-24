#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector<int> arr, int tar) {
    int st = 0, end = arr.size() - 1;

    while (st <= end) {
        int mid = (st + end) / 2;

        if (tar > arr[mid]) {
            st = mid + 1;
        }
        else if (tar < arr[mid]) {
            end = mid - 1;
        }
        else {
            return mid;   
        }
    }

    return -1;  
}

int main() {

    
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;
    cout << binarySearch(arr1, tar1) << endl;

   
    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int tar2 = 0;
    cout << binarySearch(arr2, tar2) << endl;

    return 0;
}
/*
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
*/
