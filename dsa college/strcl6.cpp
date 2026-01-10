//string ka sare use kre esma smjhne m dikkat arhi h

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s ="hello world  ";
    cout<<"original string "<<s<<endl;
    int pos = s.find("world");
    cout<<"find(world) position" <<pos<<endl;
    cout<<" rfind(1)position :"<<s<<endl;
    s.append(" !!!");
    cout<<" after append ():"<<s<<endl;
    s.insert(6,"beautiful:");
    cout<<"after insert():"<<s<<endl;
    s.erase(6,10);
    cout<<"after erase():"<<s<<endl;
    s.replace(6,5,"universe");
    cout<<"after replace():"<<s<<endl;
    string s2 = "hello universe !!!";
    if(s.compare(s2)==0)
    cout<<"string are equal"<<endl;
    else
     cout<<"string are  not equal"<<endl;
     string sub=s.substr(6,8);
     cout<<"string using substr():"<<endl;
     
     cout<<"length of string:"<<s.length()<<endl;
      cout<<"size of string:"<<s.size()<<endl;
      cout<<"character at index 1 using at():"<<s.at(1)<<endl;
      cout<<"character at index 2 using array index:"<<s[2]<<endl;
      const char* cstyle= s.c_str();
      cout<<" c-style string using c-str():"<<cstyle<<endl;
      
    return 0;
}
