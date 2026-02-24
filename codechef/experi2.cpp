#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    int element;

    cout << "Enter 6 elements: ";
    
    // Insert 6 elements
    for(int i = 0; i < 6; i++) {
        cin >> element;
        v.push_back(element);
    }

    cout << "\nVector after inserting 6 elements: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // Remove last 3 elements
    for(int i = 0; i < 3; i++) {
        v.pop_back();
    }

    cout << "\nVector after removing last 3 elements: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}