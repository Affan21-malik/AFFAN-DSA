//home work youtube 
//sum of array
#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    cout << "Sum = " << sumArray(arr, 5);
    return 0;
}
/*
//product of array
#include <iostream>
using namespace std;

int productArray(int arr[], int size) {
    int product = 1;
    for(int i = 0; i < size; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[] = {1, 2, 3, 4};

    cout << "Product = " << productArray(arr, 4);
    return 0;
}
*/
/*
//Swap min & max element (WAF)
#include <iostream>
using namespace std;

void swapMinMax(int arr[], int size) {
    int minIdx = 0, maxIdx = 0;

    for(int i = 1; i < size; i++) {
        if(arr[i] < arr[minIdx]) minIdx = i;
        if(arr[i] > arr[maxIdx]) maxIdx = i;
    }
    swap(arr[minIdx], arr[maxIdx]);
}

int main() {
    int arr[] = {3, 5, 1, 9, 2};

    swapMinMax(arr, 5);

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
*/
/*
//Print unique elements
#include <iostream>
using namespace std;

void printUnique(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        bool unique = true;
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                unique = false;
                break;
            }
        }
        if(unique) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 3, 5};

    printUnique(arr, 7);
    return 0;
}
*/
/*
//Intersection of 2 arrays
#include <iostream>
using namespace std;

void intersection(int a[], int b[], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    intersection(arr1, arr2, 4, 4);
    return 0;
}
*/

