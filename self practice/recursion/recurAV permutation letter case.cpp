#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(string ip, string op, vector<string>& v)
{
    // Base case
    if (ip.length() == 0)
    {
        v.push_back(op);
        return;
    }

    // Current character
    char ch = ip[0];

    // Remove first character from input
    ip.erase(ip.begin());

    // If character is alphabet
    if (isalpha(ch))
    {
        string op1 = op;
        string op2 = op;

        // Lowercase
        op1.push_back(tolower(ch));

        // Uppercase
        op2.push_back(toupper(ch));

        solve(ip, op1, v);
        solve(ip, op2, v);
    }
    else
    {
        // If digit, simply add it
        op.push_back(ch);

        solve(ip, op, v);
    }
}

int main()
{
    string ip = "a1b2";
    string op = "";

    vector<string> v;

    solve(ip, op, v);

    for (string s : v)
    {
        cout << s << endl;
    }

    return 0;
}