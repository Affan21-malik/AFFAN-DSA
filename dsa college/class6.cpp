#include <iostream>
using namespace std;

int main()
{
   /* int arrayA[3][3];
    cout<< "Enter elements of 3x3 array:"<<endl;
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    {
    cin>>arrayA[i][j];
    
    }

    cout<<"The array is:"<<endl;
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    {
    cout<<arrayA[i][j]<<" ";
    }
    cout<<endl;
    }*/
int matrix[3][3];

    cout << "Enter elements of 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int rsum = 0;
        for (int j = 0; j < 3; j++)
        {
            rsum += matrix[i][j];
        }
        cout << "Row " << i + 1 << " = " << rsum << endl;
    }

    for (int j = 0; j < 3; j++)
    {
        int csum = 0;
        for (int i = 0; i < 3; i++)
        {
            csum += matrix[i][j];
        }
        cout << "Column " << j + 1 << " = " << csum << endl;
    }

    
    return 0;
}
