// ye index dekr value pta lgana ki es row and es colomn ma ye value ha

/*
#include <iostream>
#include<vector>
using namespace std;
int main()
{
   
   vector<vector<int>> mat ={{ 1, 2 , 3 },{ 4 , 5 , 6 },{ 7, 8 , 9 }};
   
  
   cout<<mat[1][2]<<endl;

    return 0;
}*/


// matrix dekr usko print krana

// rows=mat.size();
//cols=mat[i].size();
/*
#include <iostream>
#include<vector>
using namespace std;
int main()
{
   
   vector<vector<int>> mat ={{ 1, 2 , 3 },{ 4 , 5 , 6 },{ 7, 8 , 9 }};
   
  for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
          cout<<mat[i][j]<<" ";
      }
      cout<<endl;
  return o;
}*/



//ye hota ha kisi row ma number pdhane ka liye 
// mtlb ki essa phele jo ha bo print krata usma 3 tk hi jata bus 
// esma size ki madat sa jo ma number denge ba sb print hoenge 



#include <iostream>
#include<vector>
using namespace std;
int main()
{
   
   vector<vector<int>> mat ={{ 1, 2 , 3 },{ 4 , 5 , 6 , 7 , 8  },{ 7, 8 , 9 }};
   
  for(int i=0;i<mat.size();i++){
      for(int j=0;j<mat[i].size();j++){
          cout<<mat[i][j]<<" ";
      }
      cout<<endl;
  }
   

    return 0;
}
