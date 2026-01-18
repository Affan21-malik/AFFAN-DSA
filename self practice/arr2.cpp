// arrar shorted 
#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    bool sorted = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "Array is Sorted";
    else
        cout << "Array is Not Sorted";

    return 0;
}

/*
//hand written code 
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
*/


/*
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3,2,7,2,8,4};
    
    for(int i=0;i<6;i++){
        int count = 0;
        for(int j=0;j<6;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout<<"Unique Value is : "<<arr[i]<<endl;
        }
    }

    return 0;
}
*/


/*
#include <iostream>
using namespace std;

void Intersection(int a[], int n, int b[], int m, int maxVal) {
    int freq[maxVal + 1] = {0};

    for(int i = 0; i < n; i++)
        freq[a[i]]++;

    for(int i = 0; i < m; i++) {
        if(freq[b[i]] > 0) {
            cout << b[i] << " ";
            freq[b[i]] = 0;
        }
    }
}

int main() {
    int n, m, maxVal;
    cin >> n >> m >> maxVal;

    int a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

   Intersection(a, n, b, m, maxVal);
}


*/

