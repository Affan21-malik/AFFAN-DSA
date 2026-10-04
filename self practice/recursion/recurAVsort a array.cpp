#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int>& v, int temp)
{
    if (v.size() == 0 || v[v.size() - 1] <= temp)
    {
        v.push_back(temp);
        return;
    }

    int val = v[v.size() - 1];
    v.pop_back();

    insert(v, temp);

    v.push_back(val);
}

void sortArray(vector<int>& v)
{
    if (v.size() == 1)
        return;

    int temp = v[v.size() - 1];
    v.pop_back();

    sortArray(v);

    insert(v, temp);
}

int main()
{
    vector<int> v = {5, 1, 4, 2, 3};

    sortArray(v);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}