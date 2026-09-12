//yo particular box ka number print krane k liye 


/*
#include <iostream>
using namespace std;
int main()
{
   int matrix[4][3]={{1, 2,3},{4,5,6},{7,8,9},{10,11,12}};
   int rows =4;
   int cols =3;
   
   
   cout<<"matrix [2][1]="<<matrix [2][1]<<endl;

    return 0;
}*/


//esma value change krayi ha matrix wali ki 
/*#include <iostream>
using namespace std;
int main()
{
   int matrix[4][3]={{1, 2,3},{4,5,6},{7,8,9},{10,11,12}};
   int rows =4;
   int cols =3;
   matrix[2][1]=18;
   
   cout<<"matrix [2][1]="<<matrix [2][1]<<endl;

    return 0;
}*/


// pure matrix print
/*
#include <iostream>
using namespace std;
int main()
{
   int matrix[4][3]={{ 1, 2 , 3 },{ 4 , 5 , 6 },{ 7, 8 , 9 },{ 10 ,11 ,12 }};
   int rows =4;
   int cols =3;
   for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
   }
   
   cout<<endl;

    return 0;
}*/


// number khud lena mtln cin krne k liye

/*
#include <iostream>
using namespace std;
int main()
{
   int matrix[4][3];
   int rows =4;
   int cols =3;
   //input 
   for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cin>>matrix[i][j];
    }
    
   }
   for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
   }
   
   cout<<endl;

    return 0;}
    */


// check krne ki bo number lie krta ya nhi mtlb true or false only


/*#include <iostream>
using namespace std;
bool linearsearch (int matrix[][3],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
       if(matrix[i][j]==key){
           return true;
       }
    }
}
return false;
}

int main()
{
   int matrix[4][3]={{ 1, 2 , 3 },{ 4 , 5 , 6 },{ 7, 8 , 9 },{ 10 ,11 ,12 }};
   int rows =4;
   int cols =3;
   int key =16;
   
   cout<<" answer is "<<linearsearch(matrix,rows,cols,16);

    return 0;
}*/


// agrn lie krta to konse row and col pr lie krta ha bo btadiya ha es code ma hmne


#include <iostream>
using namespace std;

bool linearsearch(int matrix[][3], int rows, int cols, int key, int &r, int &c) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] == key) {
                r = i;  
                c = j;  
                return true;
            }
        }
    }
    return false;
}

int main() {

    int matrix[4][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };

    int rows = 4, cols = 3;
    int key = 8;

    int r, c;  

   bool result = linearsearch(matrix, rows, cols, key, r, c);

    cout << "Function returned: " <<result << endl;

    if(result) {
        cout << "Key found at position: (" << r << ", " << c << ")" << endl;
    }
    else {
        cout << "Key not found!" << endl;
    }

    return 0;
}


