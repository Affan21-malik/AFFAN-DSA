#include <iostream>
using namespace std;
void unique(int arr[],int n,int max){
    int v[max+1]={0};
    for(int i=0;i<n;i++){
        v[arr[i]]++;
    }
    for(int i=0;i<max+1;i++){
        if(v[i]==1){
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n,max;
    cin>>n>>max;
    int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
unique(arr,n,max);
    return 0;
}