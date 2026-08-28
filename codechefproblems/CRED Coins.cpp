#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
	int a,b;
	cin>>a>>b;
	int c=a*b;
	if(c/100>=1){
	    cout<<c/100<<endl;
	}
   else{
       cout<< 0<<endl;
   }
    }
    return 0;
}
