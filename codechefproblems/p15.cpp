#include <iostream>
using namespace std;

int main() 
{
    string a,s;
    cin>>a>>s;
    int am,sw;
    cin>>am>>sw;
    if(am>sw){
        cout<<a;
    }
    else if(am==sw){
        cout<<"equal";
    }
    else{
        cout<<s;
    }
    
}
