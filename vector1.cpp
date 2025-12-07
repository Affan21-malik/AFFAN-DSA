/*#include <iostream>
#include <vector>
using namespace std ;
int main()
{
  vector<int>vec(5,0);
  for(int i :vec){
      cout<< i <<endl;
  }
    return 0;
}*/


/*
#include <iostream>
#include <vector>
using namespace std ;
int main()
{
  vector<char>vec={'a','b','c','d','e'};
  cout<<" size="<<vec.size()<<endl;
  for(char i :vec){
      cout<< i <<endl;
  }
    return 0;
}
*/


//size zero ayega esma kuch given nhi esliyye
/*#include <iostream>
#include <vector>
using namespace std ;
int main()
{
  vector<int>vec;
  cout<<"size = "<<vec.size();
  for(int i :vec){
      cout<< i <<endl;
  }
    return 0;
}*/
  
// use push back
/*
#include <iostream>
#include <vector>
using namespace std ;
int main()
{
  vector<int>vec;
  cout<<" size = "<<vec.size()<<endl;
  vec.push_back(25);
  cout<<" after push back size = "<<vec.size()<<endl;
  for(int i :vec){
      cout<<" value is "<< i <<endl;
  }
    return 0;
}
*/

// same ha uper wali ki trah bus thoda change haesma ki value jada dhikaye ha bus 

#include <iostream>
#include <vector>
using namespace std ;
int main()
{
  vector<int>vec;
  cout<<" size = "<<vec.size()<<endl;
  vec.push_back(25);
  vec.push_back(45);
  vec.push_back(55);
  
  
  cout<<" after push back size = "<<vec.size()<<endl;
  for(int i :vec){
      cout<<" value is "<< i <<endl;
  }
    return 0;
}
