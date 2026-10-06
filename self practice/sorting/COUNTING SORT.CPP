#include <bits/stdc++.h>
using namespace std;

void countingsort(int a[], int n) {

    int k = a[0];

    // Find maximum element
    for (int i = 1; i < n; i++) {
        k = max(a[i], k);
    }

    // Count array
    int count[k + 1] = {0};

    // Store frequency
    for (int i = 0; i < n; i++) {
        count[a[i]]++;
    }

    // Cumulative frequency
    for (int i = 1; i <= k; i++) {
        count[i] += count[i - 1];
    }

    // Result array
    int result[n];

    // Place elements in correct position
    for (int i = n - 1; i >= 0; i--) {
        result[count[a[i]] - 1] = a[i];
        count[a[i]]--;
    }

    // Copy result into original array
    for (int i = 0; i < n; i++) {
        a[i] = result[i];
    }
}

int main() {

    int n;
    cin >> n;

    int a[n];

    // Input array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Function call
    countingsort(a, n);

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}