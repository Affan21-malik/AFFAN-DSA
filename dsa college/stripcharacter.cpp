
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
using namespace std;

int main()
{
    char ch[20];
    cin>>ch;
    for(int i=3;i<=7;i++)
    {
        cout<<ch[i];
    }
    return 0;
}*/