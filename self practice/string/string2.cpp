#include <bits/stdc++.h>
using namespace std;
bool isalphanum(char ch)
{
    if ((ch >= '0' && ch <= '9') ||
        (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
        return true;

    return false;
}

bool ispalindrome(string s)
{
    int st = 0, end = s.length() - 1;

    while (st <= end)
    {
        if (!isalphanum(s[st]))
        {
            st++;
            continue;
        }
        if (!isalphanum(s[end]))
        {
            end--;
            continue;
        }

        if (tolower(s[st]) != tolower(s[end]))
            return false;

        st++;
        end--;
    }
    return true;
}

int main()
{
    string s;
    getline(cin, s);

    if (ispalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
// alpha numeric value ha ya nhi bo pta lgana k liye
/*
#include <bits/stdc++.h>
using namespace std;

bool isalphanum(char ch)
{
    if ((ch >= '0' && ch <= '9') ||
        (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }
    return false;
}

int main()
{
    char ch;
    cin >> ch;

    if (isalphanum(ch))
        cout << "Alpha numeric value";
    else
        cout << "Not alpha numeric value";

    return 0;
}

*/