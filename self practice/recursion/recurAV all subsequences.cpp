#include <iostream>
using namespace std;

void solve(string ip, string op)
{
    // Base case
    if (ip.length() == 0)
    {
        cout << op << " ";
        return;
    }

    // Choice 1: Don't include ip[0]
    string op1 = op;

    // Choice 2: Include ip[0]
    string op2 = op;
    op2.push_back(ip[0]);

    // Remove first character from input
    ip.erase(ip.begin() + 0);

    // Recursive calls
    solve(ip, op1);
    solve(ip, op2);
}

int main()
{
    string ip;
    cin >> ip;

    string op = "";

    solve(ip, op);

    return 0;
}