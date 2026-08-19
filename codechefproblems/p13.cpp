//
//chatgpt
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        if (M >= N) {
            cout << N << endl;      
        } else {
            cout << (N - M) + N << endl;  
        }
    }
    return 0;
}

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
	int a,b;
	cin>>a>>b;
	if(a<b){
	   cout<<a<<endl; 
	}
	else {
	    cout<<a+(a-b)<<endl;
	}
    }

}
