// ex 6 using recursion 
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int st, int end, int tar) {

    if (st > end) {
        return -1;   
    }

    int mid = st + (end - st) / 2;

    if (arr[mid] == tar) {
        return mid;
    }
    else if (tar > arr[mid]) {
        return binarySearch(arr, mid + 1, end, tar);
    }
    else {
        return binarySearch(arr, st, mid - 1, tar);
    }
}

int main() {

    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;
    cout << binarySearch(arr1,0,  arr1.size() - 1, tar1) << endl;

    return 0;
}