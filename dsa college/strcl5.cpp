// for each loop for name same to same print

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str={"welcome home "};
    for(char c:str){
        cout<<c;
    }

    return 0;
}

*/

// append in string


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 ="welcome home ";
    string str2 =" home ";
    cout<<str1+str2<<endl;
    cout<<str1.append(str2);
    
    cout<<str1+" "+str2+ " "+" joy "<<endl;
    
    cout<<"length of str1 : "<<str1.length();
    
    return 0;
}



