//Array print (direct index)
#include <iostream>
using namespace std;

int main() {
    int marks[5] = {99, 100, 54, 36, 88};

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    return 0;
}

/*
 // value change
#include <iostream>
using namespace std;

int main() {
    int marks[5] = {99, 100, 54, 36, 88};

    marks[0] = 101;  

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    return 0;
}

*/
/*
//Array print using loop
#include <iostream>
using namespace std;

int main() {
    int marks[5] = {99, 100, 54, 36, 88};
    int size = 5;

    for(int i = 0; i < size; i++) {
        cout << marks[i] << endl;
    }
    return 0;
}
*/
/*
//Take input in array & print
#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int marks[size];

    for(int i = 0; i < size; i++) {
        cin >> marks[i];
    }

    for(int i = 0; i < size; i++) {
        cout << marks[i] << endl;
    }
    return 0;
}

*/
/*
//Find smallest element (IF method)
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX;

    for(int i = 0; i < size; i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];
        }
    }

    cout << "smallest = " << smallest << endl;
    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
int marks[5];
int size =5;
for(int i=0;i<size;i++){
    cin>>marks[i];
}
int smallest = INT_MAX;
for(int i = 0;i<size;i++){
  if(marks[i]<smallest){
      smallest =marks[i];
  }
}
cout<<"smallest is "<<smallest;
    return 0;
}
*/
/*
//Find smallest & largest (min / max)
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, -24};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i < size; i++) {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }

    cout << "smallest = " << smallest << endl;
    cout << "largest = " << largest << endl;

    return 0;
}
*/
/*
//Reverse array (WAF)
#include <iostream>
using namespace std;

void reverseArray(int arr[], int sz) {
    int start = 0, end = sz - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;

    reverseArray(arr, sz);

    for(int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
*/
/*
//Change array using function
#include <iostream>
using namespace std;

void changeArr(int arr[], int size) {
    cout << "in function\n";
    for(int i = 0; i < size; i++) {
        arr[i] = 2 * arr[i];
    }
}

int main() {
    int arr[] = {1, 2, 3};

    changeArr(arr, 3);

    cout << "in main\n";
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/