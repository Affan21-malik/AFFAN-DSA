
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(int open, int close, string op, vector<string>& ans)
{
    // Base condition
    if (open == 0 && close == 0)
    {
        ans.push_back(op);
        return;
    }

    // Case 1: Insert opening bracket '('
    if (open != 0)
    {
        string op1 = op;
        op1.push_back('(');

        solve(open - 1, close, op1, ans);
    }

    // Case 2: Insert closing bracket ')'
    if (close > open)
    {
        string op2 = op;
        op2.push_back(')');

        solve(open, close - 1, op2, ans);
    }
}

int main()
{
    int n;
    cout << "Enter number of pairs: ";
    cin >> n;

    vector<string> ans;
    string op = "";

    solve(n, n, op, ans);

    cout << "Balanced Parentheses are:\n";

    for (string s : ans)
    {
        cout << s << endl;
    }

    return 0;
}
