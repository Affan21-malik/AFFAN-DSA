#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(40); 
 s.insert(50);
  s.insert(60);
  
  
  for (auto x: s){
      cout<< x<<" "<<endl;
  }
  cout<<" after print number "<<endl;
  cout<<"size is "<< s.size();

    return 0;
}

/*

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s={10,20,30,40};

   

    if( s.find(20)!=s.end())
        cout<<"Found";
    else
        cout<<"Not Found";

    return 0;
}



#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s={10,20,30};

    cout<<s.count(20)<<endl;
    cout<<s.count(100);

    return 0;
}
*/