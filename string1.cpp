// MTLB ' ' ESKA NADER JO LIKHOGE AGR BO AGYA TO USSE AGA PRINT NHI KRAYEGA

/*#include <iostream>
using namespace std;
int main()
{
  char str[100];
  cout<<"enter char array :";
 cin.getline(str,100,'#');
  cout<<"output :"<<str<<endl;

    return 0;
}*/


// length of array
/*
#include <iostream>
using namespace std;
int main()
{
  char str[]="apna college";
  int len= 0;
  for(int i=0;i<str[i]!='\0';i++){
      len++;
  }
cout<<"length of string :"<<len<<endl;
    return 0;
}
*/

//string ko asi hi print krana ha

/*
#include <iostream>
using namespace std;
int main()
{
 string str="apna college";
cout<<" string :"<<str<<endl;
    return 0;
}
*/
// combine of str 
/*
#include <iostream>
using namespace std;
int main()
{
 string str1="apna";
 string str2=" college" ;
 string str3= str1+str2;
cout<<" combine of string = "<<str3<<endl;
    return 0;
}
*/

//compare
/*
#include <iostream>
using namespace std;
int main()
{
 string str1="apna";
 string str2="apna" ;
 
cout<<(str1==str2)<<endl;
    return 0;
}
*/

// particular str ki length nikali
/*
#include <iostream>
using namespace std;
int main()
{
 string str1="apna";
 string str2="apna" ;
 
cout<<str1.length()<<endl;
    return 0;
}
*/

//cin le rhe h esmaa
/*
#include <iostream>
using namespace std;
int main()
{
 string str;
 getline(cin,str);
 
cout<<str<<endl;
    return 0;
}
*/

//string dekr usko print krane loop ki madat sa
/*
#include <iostream>
using namespace std;
int main()
{
 string str="apna college";
 for(int i=0;i<str.length();i++){
     cout<<str[i]<<" ";
 }
 
cout<<endl;
    return 0;
}
*/

//same uper wala output dega 
/*
#include <iostream>
using namespace std;
int main()
{
 string str="apna college";
 for(char ch:str){
     cout<<ch<<" ";
 }
 
cout<<endl;
    return 0;
}
*/

//reverse in string 
/*
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
 string str="apna college";
 reverse(str.begin(),str.end());
cout<<str<<endl;
    return 0;
}
*/

//pallimdrome in string 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, rev = "";

    cout << "Enter a string: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }

    if (str == rev)
        cout << "Palindrome string";
    else
        cout << "Not a palindrome string";

    return 0;
}
