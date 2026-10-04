// fibonacci series in recursion

/*
#include <iostream>
using namespace std;
int fib(int n){
//if(n==0){
  //  return 0;
  //}
  //else if(n==1){
   // return 1;
  //}
  // dono looop samwe work krenege ok
  if(n==0||n==1){
   return n;}
  
 return fib(n-2)+fib(n-1);

}
int main()
{
    cout<<fib(4)<<endl; 

    return 0;
}
*/


// array sorted in reursion  

/*
#include <iostream>
#include<vector>
using namespace std;
bool issorted(vector<int>arr,int n){
  if(n==0||n==1){
   return true ;}
  
 return arr[n-1]>=arr[n-2]&& issorted(arr,n-1);

}
int main()
{
    vector<int>arr={1,2,3,4,5};
    cout<<issorted(arr,arr.size());

    return 0;
}

*/



// binary number search

#include <iostream>
#include <vector>
using namespace std;

int binsearch(vector<int>& arr, int tar, int st, int end) {

    if (st <= end) {

        int mid = (st + end) / 2;

        if (arr[mid] == tar) {
            return mid;
        }
        else if (arr[mid] < tar) {
            return binsearch(arr, tar, mid + 1, end);
        }
        else {
            return binsearch(arr, tar, st, mid - 1);
        }
    }

    return -1;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int tar = 5;

    int st = 0;
    int end = arr.size() - 1;

    int ans = binsearch(arr, tar, st, end);

    cout << "Index: " << ans;

    return 0;
}
