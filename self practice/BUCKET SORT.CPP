 #include <bits/stdc++.h>
using namespace std;

void bucketsort(float a[], int n) {

    vector<float> bucket[n];

    // Put elements into buckets
    for(int i = 0; i < n; i++) {
        int value = n * a[i];
        bucket[value].push_back(a[i]);
    }

    // Sort individual buckets
    for(int i = 0; i < n; i++) {
        sort(bucket[i].begin(), bucket[i].end());
    }

    // Merge all buckets
    int k = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < bucket[i].size(); j++) {
            a[k++] = bucket[i][j];
        }
    }
}

int main() {

    int n;
    cin >> n;

    float a[n];

    // Input array
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Function call
    bucketsort(a, n);

    // Print sorted array
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}