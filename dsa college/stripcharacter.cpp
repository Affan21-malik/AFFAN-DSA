
#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    string S;
    cin >> S;

    string result = S.substr(K, N - 2*K);

    cout << result;

    return 0;
}

/*
// dono code same work krenge ok uper wala hr jgha kaam krega
#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char ch[200];
    cin>>ch;
    cout<<"Enter how much to remove: ";
    int n;
    cin>>n;
    int len=strlen(ch);
    for(int i=n;i<len-n;i++)
    {
        cout<<ch[i];
    }
    return 0;
}
}*/