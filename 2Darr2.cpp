// check number lie krta to true ani false ok
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
   int key =8;
   
   cout<<" answer is "<<linearsearch(matrix,rows,cols,8);

    return 0;
}*/



// print max row ka sum 

/*#include <iostream>
#include <climits>
using namespace std;

int getMaxSum(int matrix[][3], int rows, int cols) {
    int maxRowSum = INT_MIN;

    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        maxRowSum = max(maxRowSum, rowSum);
    }
    return maxRowSum;
}

int main() {
    int matrix[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int rows = 3;
    int cols = 3;

    cout << "Answer is: " << getMaxSum(matrix, rows, cols);
    return 0;
}
*/

// same bus esma cols ka sum print krane ha ok 


/*#include <iostream>
#include <climits>
using namespace std;

int getMaxColumnSum(int matrix[][3], int rows, int cols) {
    int maxColSum = INT_MIN;

    for (int j = 0; j < cols; j++) {   // j = column
        int colSum = 0;
        for (int i = 0; i < rows; i++) {  // i = row
            colSum += matrix[i][j];
        }
        maxColSum = max(maxColSum, colSum);
    }

    return maxColSum;
}

int main() {
    int matrix[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int rows = 3;
    int cols = 3;

    cout << "Max Column Sum is: " << getMaxColumnSum(matrix, rows, cols);
    return 0;
}
*/