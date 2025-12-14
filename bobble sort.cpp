#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10], k, x, y, t;

    for(k = 0; k < 10; k++)
    {
        cin >> a[k];
    }

    for(x = 0; x < 10 - 1; x++)
    {
        for(y = 0; y < 10 - 1 - x; y++)
        {
            if(a[y] > a[y + 1])
            {
                t = a[y];
                a[y] = a[y + 1];
                a[y + 1] = t;
            }
        }
    }

    cout << "Sorted array: ";
    for(k = 0; k < 10; k++)
    {
        cout << a[k] << " ";
    }
    cout << endl;

    return 0;
}